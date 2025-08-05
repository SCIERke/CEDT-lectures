#include <iostream>
#include <cmath>
using namespace std;


int main() {
  long double a ,b ,c;

  cin >> a >> b >> c;

  // x1
  long double top_section_1 = -b - sqrt(pow(b ,2) - 4 * a *c);
  long double low_section = 2*a;
  long double x1 = top_section_1 / low_section;

  // x2
  long double top_section_2 = (-b + sqrt(pow(b ,2) - 4 * a *c) );
  long double x2 = top_section_2 / low_section;

  cout << round(x1/1*1e3)/1e3 << " " << round(x2*1e3)/1e3;

}