#include "LogNNet.h"

float Sh[P+1];
byte Y[S+1]; 
int i = 0;

void Hidden_Layer_Calculating(byte *Y) { 
  int W1 = C;
  long Sh_f = 0;
  Sh[0] = 1;
  for (int j = 1; j <= P; j++) {
    Sh[j] = 0; Sh_f = 0;
    for (int i = 0; i <= S; i++) {
      W1 = (K * W1 + D) % L;
      Sh_f = Sh_f + (long)W1 * Y[i];
    }
    Sh[j] = (float)Sh_f / (L*255L);
  }
}

void Hidden_Layer_Normalization() {
  Sh[0] = 1;
  for (int j = 1; j <= P; j++) 
    Sh[j] = ((Sh[j] - minH[j-1]/100.0) / ((maxH[j-1] 
       - minH[j-1])/100.0)) - 0.5 - meanH[j-1]/10000.0;
}

byte Output_Layer() {
  float Sout[M];
  for (int j = 0; j < M; j++) {
    Sout[j] = 0;
    for (int i = 0; i <= P; i++) 
      Sout[j] = Sout[j]+Sh[i]*W2[i][j]/100.0;
    Sout[j] = 1 / (1 + exp(-1*Sout[j]));
  }
  byte digit = 0;
  for (int i = 0; i < M; i++) {
    if (Sout[i] > Sout[digit])
      digit = i;
  }
  return digit;
}

void setup() {
  Serial.begin(115200);
}

void loop() {
  if (Serial.available() > 0) {
    Y[i] = Serial.read(); 
    i++;  
    if (i == S+1) { 
      i = 0;
      Hidden_Layer_Calculating(Y);
      Hidden_Layer_Normalization();
      byte Digit = Output_Layer();
      Serial.print(String(Digit));
    }
  }      
}
