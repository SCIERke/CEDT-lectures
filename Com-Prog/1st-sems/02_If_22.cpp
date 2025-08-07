#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int d ,m ,y;

  cin >> d >> m >> y;

  y -= 543;

  // vector<int> month_days;
  int days = 0;

  for (int i = 1 ; i < m; i++) {
    int n = 31;
    if ( i == 4 || i == 6 || i == 9 || i == 11) {
      n = 30;
    } else {
      if (i == 2) {
        n = 28;
        if ( y % 400 == 0) {
          n = 29;
        }
        if ( y % 4  == 0 && y % 100 != 0) {
          n = 29;
        }
      }
    }
    days += n;
  }
  days += d;

  cout << days;

  return 0;
}