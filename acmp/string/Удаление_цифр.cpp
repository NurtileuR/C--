#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i;i<s.size();i++){
        if(s[i]=='7' || s[i]=='4'){
            s[i]=char(0);
        }
    }
        cout << s;
        
    }