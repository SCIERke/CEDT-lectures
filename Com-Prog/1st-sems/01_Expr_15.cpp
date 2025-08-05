#include <bits/stdc++.h>

using namespace std;

int main() {
  long double x;
  cin >> x;

  long double exp_section = sqrt(log(pow(x+1 ,2)));
  long double top_section = pow(x ,exp_section );
  long double under_section = 10 - x;

  long double y = top_section / under_section;
  cout << round(y*1e6)/1e6;
}