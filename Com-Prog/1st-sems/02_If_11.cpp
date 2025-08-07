#include <iostream>
#include <string>
#include <cmath>

int main() {
  std::string code;
  std::cin >> code;

  if (code.length() != 2) {
    std::cout << "Error";
    return 0;
  }

  for (char c:code) {
    if (c < '0' || c > '9') {
      std::cout << "Error";
      return 0;
    }
  }

  if ((stoll(code) >= 1 && stoll(code) <= 2) || (stoll(code) >= 20 && stoll(code) <= 40) || stoll(code) == 51 || stoll(code) == 53 || stoll(code) == 55 || stoll(code) == 58) {
    std::cout << "OK";
    return 0;
  }
  std::cout << "Error";
  return 0;
}