#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  if ( n > 0) {
    cout << "positive";
  } else if (n < 0) {
    cout << "negative";
  } else {
    cout << "zero";
  }
  cout << endl;

  if (n % 2 == 0) {
    cout << "even";
  } else {
    cout << "odd";
  }
}