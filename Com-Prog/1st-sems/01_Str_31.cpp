#include <iostream>
#include <cmath>
#include <string>

using namespace std;

long gcd(long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}

int main() {
  // long long a , b, c;

  // cin >>  >> b >> c;
  // string b_str = to_string(b) ,c_str = to_string(c);
  string a_str , b_str ,c_str;
  cin >> a_str >> b_str >> c_str;

  long long a = stoll(a_str) , b = stoll(b_str) , c = stoll(c_str);

  string front = b_str + c_str;
  long long front_int = stoll(front);
  long long top_section = front_int - b;
  string under_section = "";

  for (int i = 0; i < (int)c_str.length() ; i++){
    under_section += "9";
  }

  for (int i = 0 ; i < (int)b_str.length(); i++) {
    under_section += "0";
  }

  top_section += a*stoi(under_section);

  long long under_section_int = stoll(under_section);

  long long gcd_result = gcd(top_section ,under_section_int );

  cout << top_section <<endl;
  cout << under_section<< endl;

  cout << top_section/gcd_result << " / " << under_section_int / gcd_result;
}