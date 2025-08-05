#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  long double w , h;
  cin >> w >> h;

  // Mosteller
  long double mosteller = sqrt(w*h) / 60;

  // Haycock
  long double haycock = 0.024265 * pow(w,0.5378) * pow(h ,0.3964);

  // Boyd
  long double boyd = 0.0333 * pow(w , 0.6157 - 0.0188 * log10(w)) * pow(h , 0.3);


  cout << setprecision(15) << mosteller << endl;
  cout << setprecision(15) << haycock << endl;
  cout << setprecision(15) << boyd << endl;

  return 0;
}