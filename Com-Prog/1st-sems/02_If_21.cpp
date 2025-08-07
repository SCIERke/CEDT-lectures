#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double n;
  cin >> n;

  if ( n < 1000) {
    cout << n;
  } else if ( n >= 1e3 && n < 1e4) {
    n /= 1e3;
    cout <<  round(n*10)/10.0 << 'K';
  } else if (n >= 1e4 && n < 1e6) {
    n /= 1e3;
    cout << round(n) << 'K';
  } else if (n >= 1e6 && n < 1e7 ) {
    n /= 1e6;
    cout <<  round(n*10)/10.0 << "M";
  } else if (n >= 1e7 && n < 1e9) {
    n /= 1e6;
    cout <<  round(n) << "M";
  } else if (n >=1e9 && n < 1e10) {
    n /= 1e9;
    cout <<  round(n*10)/10.0 << "B";
  } else if (n >= 1e10) {
    n /= 1e9;
    cout <<  round(n) << "B";
  }
}