# Method for fast classification of MNIST digits on Arduino UNO board using LogNNet and linear congruential generator

This method made it possible to reduce the MNIST handwritten digit recognition time on the low-memory Arduino Uno board to 0.28 s for the LogNNet 784:20:10 configurations, with a classification accuracy of ~ 82%. It was found that the computations with integers gives an increase in the speed of the algorithm by more than 2 times in comparison with the algorithm using the real type when generating a chaotic time series. The developed method can be used to accelerate the calculations of edge devices in the field of "Internet of Things", for example, for mobile medical devices, autonomous vehicle control systems and bionic suit control.

IOP Publishing: doi:10.1088/1742-6596/2094/3/032055

Published: [IOP Conference Series](https://iopscience.iop.org/article/10.1088/1742-6596/2094/3/032055 "Submitted on 29 November 2021")
