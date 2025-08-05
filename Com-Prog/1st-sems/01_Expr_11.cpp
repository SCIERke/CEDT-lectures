#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  long double FAC_10 = 10*9*8*7*6*5*4*3*2;
  long double FAC10faction = FAC_10 / pow(8 , 8);


  long double EXP_1 = (7.0 / sqrt(71));
  double angle_in_radians = 40 * (M_PI / 180.0);
  long double EXP_2 = sin(angle_in_radians);

  long double LOGE = pow(log(9.7), EXP_1 - EXP_2);

  long double TOP_SECTION = M_PI - FAC10faction + LOGE;

  long double EXP_3 = cbrt(2.3);
  long double UNDER_SECTION =  pow(1.2 , EXP_3);

  cout <<TOP_SECTION /  UNDER_SECTION;
}