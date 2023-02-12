#include <iostream>
using namespace std;

string binary(int n, string s = "") {
  if(n == 0) return s;
  s = char(n % 2 + '0') + s;
  n /= 2;
  return binary(n, s);
}

string shortBinary(int n, string s = "") {
  return n == 0 ? s : binary(n / 2, s = char(n % 2 + '0') + s);
}

int main(){
  int n; cin >> n;
  cout << shortBinary(n);
}