#include <iostream>

using namespace std;
int main(){
    string s; cin >> s;
    for(int i=0;i<s.size();i++){
        s[i]>= 'a' && s[i]<= 'z' ? s[i]-=32 : 0;
    }
    cout << s;
}
