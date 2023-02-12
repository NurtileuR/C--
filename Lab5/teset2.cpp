#include <iostream>
#include <string>
using namespace std;
int main{
    char n;
    cin >> n;
    for(int i=0;i<n.size();i++){
    if(n[i] >= 'a'&& n[i]<= 'z' || n[i] >= "A" && n[i] <= "Z"){
        cout <<  "Letter";
    }
    else{
        cout <<"Digit";
    }
}}