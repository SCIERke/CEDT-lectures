#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  long double Xe , Ye , Re, Rp , Xm ,Ym;
  cin >> Xe >> Ye >> Re >> Rp >> Xm >> Ym;

  long double A = Xm - Xe;
  long double B = Ym - Ye;
  long double C = sqrt(pow(A, 2) + pow(B ,2));
  long double c = Re - Rp;

  long double a = A*c /C;
  long double b = B*c /C;

  cout << round(Xe+ a) << " " << round(Ye + b);
  return 0;
}