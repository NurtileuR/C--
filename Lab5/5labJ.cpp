#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;cin >> s;
    string copy=s;
    reverse(s.begin(), s.end());
    if(copy==s){
        cout <<"YES";
        return 0;
    }
    reverse(s.begin(), s.end());
    s+=s[0]; copy = s;
    reverse(s.begin(), s.end());
    cout << (s==copy ? "YES" : "NO");

}