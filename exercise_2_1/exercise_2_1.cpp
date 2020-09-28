#include <vector>
#include <iostream>
#include "convolution.h"

int main() {

  std::vector<double> vec1 = {1,2,3,4,5,6,7};
  std::vector<double> vec2 = {2,5,6};
  std::vector<double> result1 = applyConvolution(vec1, vec2, true);
  std::vector<double> result2 = applyConvolution(vec1, vec2, false);
  // Prints first convolution vector
  std::cout << "{" << result1[0];
  for (int i = 1; i < result1.size(); i++) 
  {
    std::cout << ", " << result1[i];
  }
  std::cout << "}\n";
  // Prints second convolution vector
  std::cout << "{" << result2[0];
  for (int i = 1; i < result2.size(); i++) 
  {
    std::cout << ", " << result2[i];
  }
  std::cout << "}";

  
}
