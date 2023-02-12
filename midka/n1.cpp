#include <iostream>
#include <vector>
using namespace std;

int getSum(string s) {
  int sum = 0;
  for(int i = 0; i < s.size(); i++) {
    sum += int(s[i] - '0');
  }
  return sum;
}

int main() {
  int n; cin >> n;
  vector <string> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  if(n % 2 == 1) {
    cout << "NO" << endl;
    return 0;
  }

  string s1, s2;
  for(int i = 0; i < v.size() / 2; i++) {
    s1 += v[i];
  }
  for(int i = v.size() / 2; i < v.size(); i++) {
    s2 += v[i];
  }
  int sum1 = getSum(s1);
  int sum2 = getSum(s2);
  string result = (sum1 == sum2) ? "YES" : "NO";
  cout << result;
}