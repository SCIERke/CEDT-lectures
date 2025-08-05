# include <iostream>
using namespace std;

int main() {
  int degree;
  cin >> degree;

  if (degree < 160) {
    cout << "Undercooked";
  } else if (degree > 180 ) {
    cout << "Burnt";
  } else {
    cout << "Perfect";
  }

  return 0;
}