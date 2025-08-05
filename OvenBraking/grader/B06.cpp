#include <bits/stdc++.h>
using namespace std;

int main() {
  string season ,moon ,ingredient;
  cin >> season >> moon >> ingredient;

  if (season == "spring" || season == "summer") {
    if (moon == "full") {
      if (ingredient == "honey" ||  ingredient == "milk") {
        cout << "Ingredient accepted!";
      } else {
        cout << "Ingredient rejected!";
      }
    } else {
      if (moon == "new" && ingredient != "chocolate") {
        cout << "Ingredient rejected!";
      } else {
        cout << "Ingredient accepted!";
      }
    }
  } else {
    if (season == "autumn" || season == "winter") {
      if (moon == "waning" || moon == "new") {
        if (ingredient == "chocolate" || ingredient == "milk") {
          cout << "Ingredient accepted!";
        } else {
          cout << "Ingredient rejected!";
        }
      } else {
        cout << "Ingredient accepted!";
      }
    } else {
      cout << "Ingredient rejected!";
    }
  }
}