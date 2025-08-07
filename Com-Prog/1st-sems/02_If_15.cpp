#include <iostream>
#include <string>
#include <cmath>

int main() {
  std::string number;

  std::cin >> number;

  std::string number_check = number.substr(0 ,2);

  if ( number_check == "06" || number_check == "08" || number_check == "09") {
    std::cout << "Mobile number";
  } else {
    std::cout << "Not a mobile number";
  }

  return 0;
}