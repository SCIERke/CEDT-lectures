#include <bits/stdc++.h>
using namespace std;


int main() {
  vector<string> userId;
  vector<int> attack(2), defense(2), speed(2);

  for (int i=0; i < 2 ;i++) {
    string temp;
    cin >> temp;
    userId.push_back(temp);
  }

  for (int i = 0; i < 2; i++) {
    cin >> attack[i] >> defense[i] >> speed[i];
  }
  int sum[2];

  for (int i = 0 ; i < 2 ;i++) {
    sum[i] = attack[i] + defense[i] + speed[i];
  }

  if (sum[0] == sum[1]) {
    if (attack[0] == attack[1]) {
      if (speed[0] == speed[1]) {
        if (userId[0].substr(2, 1) == "3" && userId[1].substr(2, 1) != "3") {
          cout << "Win: " << userId[0];
        } else if (userId[0].substr(2, 1) != "3" && userId[1].substr(2 ,1) == "3") {
          cout << "Win: " << userId[1];
        } else {
           if (userId[0].substr(8, 2) == "21" && userId[1].substr(8, 2) != "21") {
            cout << "Win: " << userId[0];
          } else if (userId[0].substr(8, 2) != "21" && userId[1].substr(8 ,2) == "21") {
            cout << "Win: " << userId[1];
          } else {
            if (userId[0].substr(0, 2) == userId[1].substr(0, 2)) {
              cout << "No one.";
            } else {
              cout << "Win: " << userId[stoi(userId[0].substr(0, 2)) > stoi(userId[1].substr(0, 2))];
            }
          }
        }
      } else {
        cout << "Win: " << userId[speed[0] < speed[1]];
      }
    } else {
      cout << "Win: " << userId[attack[0] < attack[1]];
    }
  } else {
    cout << "Win: " << userId[sum[0] < sum[1]];
  }

  return 0;
}