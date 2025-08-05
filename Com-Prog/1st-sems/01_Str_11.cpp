#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  string id;
  cin >> id;

  long long sum = 0;
  int j = 13;
  for (int i = 0; i< (int)id.length() ; i++) {
    sum += ((id[i]- '0')* (j-i));
  }
  long long result = (11 - (sum % 11)) % 10;

  for (int i = 0; i< (int)id.length() ; i++) {

    cout << id[i];
    if (i == 0 || i == 4 || i == 9 || i == 11 ) {
      cout << "-";
    }
  }
  cout << result;
  return 0;
}