#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='6' || s[i]=='9' || s[i]=='0'){
            cnt++;
        }
        if(s[i]=='8'){
            cnt=cnt+2;
        }
    }
    cout << cnt;
}
