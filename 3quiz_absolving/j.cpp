#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(string s) {
  string t = s;
  reverse(t.begin(), t.end());
  return t == s;
}

int main() {
  string s; cin >> s;
  int mx = 0;
  if(isPalindrome(s)) {
    for(int i = 0; i < s.size(); ++i){
      for(int j = 0; j < s.size(); ++j){
        string sub = s.substr(i, j);
        if(sub.size() != 0 && !isPalindrome(sub) && mx < sub.size()) {
          mx = sub.size();  
        }
      }
    }
    cout << mx << endl;
  } else {
    cout << s.size() << endl;
  }


  return 0;
}