#include <iostream>
using namespace std;

void upp(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='u' || s[i]=='i' || s[i]=='o' || s[i]=='A' || s[i]=='O' || s[i]=='E' || s[i]=='I' || s[i]=='U'){
            s[i] = 0;
        }
    
    }
    for(int i=0;i<s.length();i++){
        if(s[i]!= 0){
            cout <<s[i];
        }
}
}
int main(){
    string s;
    getline(cin,s);
    upp(s);
}