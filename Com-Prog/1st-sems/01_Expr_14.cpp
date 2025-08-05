#include <iostream>
#include <cmath>

using namespace std;

int main() {
  string year;
  cin >> year;
  int year_int = stoi(year)-543;

  int yr = year_int % 100;
  int date_idx = yr + floor(yr/4) +11;

  cout << date_idx % 7;
  return 0;
}