#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        // if(s[i]>=97 && s[i]<=122)
        if (s[i]==122){
            s[i]=96;}
        cout << (char)(s[i]+1);
        }  
    }  
