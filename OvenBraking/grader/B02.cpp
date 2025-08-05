#include <bits/stdc++.h>
using namespace std;

int main() {
  double targetWeight ,realWeight;
  char unit;

  cin >> targetWeight >> unit;
  cin >> realWeight;

  if (unit == 't') {
    targetWeight *= 1000000;
  } else if (unit == 'k') {
    targetWeight *= 1000;
  }

  double partition = (realWeight / targetWeight)*100;

  if (partition == 100) {
    cout << "Perfect";
  } else if (partition < 95 ) {
    cout << "Add More";
  } else if (partition > 105) {
    cout << "Too Much";
  } else {
    cout << "Pretty Good";
  }

}