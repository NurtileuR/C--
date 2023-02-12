#include <iostream>

using namespace std;

int main(){
    string s,t;
    char c;
    cin >> s >> t >> c;

    for(int i=0;i<s.size();i++){
        for(int j=0;j<t.size();j++){
            if(s[i]==t[j]){
                s[i]=c;
            }
        }
    }
    cout << s;
} 