#include <iostream>
#include <cmath>

int main() {

  double max = -1 , min = 1e9;

  double sum = 0;

  for (int i = 0 ; i < 4 ;i++) {
    double temp;
    std::cin >> temp;
    if (temp > max) max = temp;
    if (temp < min) min = temp;

    sum += temp;
  }
  // std::cout << sum << std::endl;
  double x =(sum - max - min) / 2;
  std::cout <<std::round(x*100.0)/100.0;


  return 0;
}