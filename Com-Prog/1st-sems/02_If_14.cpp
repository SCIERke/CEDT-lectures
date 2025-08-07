#include <iostream>
#include <string>
#include <vector>

int condition_1(char com,char cal1 , char cal2) {
  int com_ = 5 - com  + 'A',cal1_  = 5- cal1 + 'A', cal2_ = 5- cal2 + 'A';
  // std::cout << "com_" << com_ << std::endl;
  // std::cout << "cal1_" << cal1_ << std::endl;
  // std::cout << cal2 << " cal2_ " << cal2_ << std::endl;

  if (com_ == 5 && cal1_ >= 3 && cal2_ >= 3) {
    return 1;
  }
  return 0;
}


int main() {
  std::string id_x , id_y;
  double gpax_x , gpax_y;
  char com_x , com_y , cal1_x , cal1_y , cal2_x , cal2_y;

  std::cin >> id_x >> gpax_x >> com_x >> cal1_x >> cal2_x;
  std::cin >> id_y >> gpax_y >> com_y >> cal1_y >> cal2_y;

  int status_x = condition_1(com_x , cal1_x ,cal2_x);
  int status_y = condition_1(com_y , cal1_y ,cal2_y);

  // std::cout << status_x << std::endl << status_y << std::endl;


  if (status_x == 0 && status_y == 0) {
    std::cout << "None";
  } else if (status_x == 1 && status_y == 0) {
    std::cout << id_x;
  } else if (status_x == 0 && status_y == 1) {
    std::cout << id_y;
  } else {
    status_x = 0;
    status_y = 0;

    if (gpax_x > gpax_y) {
      std::cout << id_x;
    } else if (gpax_x < gpax_y) {
      std::cout << id_y;
    } else {
      if (cal1_x < cal1_y) {
        std::cout << id_x;
      } else if (cal1_x > cal1_y) {
        std::cout << id_y;
      } else {
        if (cal2_x < cal2_y) {
          std::cout << id_x;
        } else if (cal2_x > cal2_y) {
          std::cout << id_y;
        } else {
          std::cout << "Both";
        }
      }
    }
  }

  return 0;
}