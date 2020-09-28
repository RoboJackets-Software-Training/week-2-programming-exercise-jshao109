#include <vector>
#include <iostream>
#include "convolution.h"

int main() {

  std::vector<double> vec1 = {1,2,3,4,5,6,7};
  std::vector<double> vec2 = {2,5,6};
  printVector(applyConvolution(vec1, vec2, true));
  printVector(applyConvolution(vec1, vec2, false));
 
}
