#pragma once
#include <Arduino.h>

#define S 784
#define P 20
#define M 10

#define K 2
#define D 0
#define L 5534
#define C 18

int maxH[P] = {15560, 15955, 15376, 15747, 15341, 15572, 16085, 15241, 14856, 
  15242, 16217, 15446, 15222, 15443, 16318, 15304, 15644, 15890, 15802, 15880};
int minH[P] = {947, 1012, 1092, 1083, 916, 918, 968, 995, 938, 854, 850, 974, 
  1116, 1148, 1034, 826, 1056, 1173, 1262, 1055};
int meanH[P] = {-2126, -2135, -2083, -2261, -2205, -2275, -2353, -2286, -2199, 
  -2298, -2355, -2301, -2392, -2202, -2229, -2094, -2065, -2079, -2158, -2131};

int W2[P+1][M] = {
  {-532, -838, -506, -451, -566, -462, -599, -617, -435, -467},
  {2940, 2883, -1006, 7638, -3923, 2846, -2940, 564, -4570, -7224},
  {-169, 4660, 2042, 3424, -296, -6342, -3137, 479, 3623, 5827},
  {-8760, 3931, -2129, 1395, 520, 978, 4301, 226, 1565, -1682},
  {2263, 2493, 92, -2161, -180, 1661, -1041, 111, 2708, -9947},
  {-1709, -3813, 2386, 714, -749, -470, -7081, 3387, 1996, 1211},
  {-131, -2837, -3068, -2811, 291, -2319, 2416, 7812, -3712, 262},
  {-4529, 30, 1819, 7953, 2253, -1009, 881, -2366, -3979, -1589},
  {71, 1430, -2250, -5100, -4128, 2385, 4466, 1719, 1716, -1225},
  {5639, -5393, -2478, -1602, -1510, 666, -1237, 1359, -3674, 1320},
  {373, -1593, -2585, 360, 877, 1677, 3633, -9529, 3012, -1306},
  {2953, -5200, 6622, -2990, -2713, -2639, -1456, 4430, -3929, -359},
  {-3745, 4295, -5898, 3035, 2943, 3808, -3237, -2715, -236, 920},
  {-1326, 3553, 3097, -821, -2860, -5399, -629, -1013, -3111, 2405},
  {-3546, 2776, 4094, 2645, -660, -260, -1838, -3423, 3310, 851},
  {3597, -2437, -2685, -2732, -5460, 3503, 3438, -1694, 6854, 1170},
  {721, -7185, -1495, -4158, 9657, 2137, -1905, 2359, -845, -442},
  {3946, -286, 2630, -1114, -85, -5438, 544, -1166, -1187, 299},
  {-410, -2036, 3307, 1777, 351, 1179, -3856, 2770, -3552, 5261},
  {-768, 1940, -4316, 2280, 3136, 452, -1512, 2014, 2634, 2476},
  {2437, -1209, 1730, -8160, 1170, 1441, 9416, -6813, 1287, 853}
};
