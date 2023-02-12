#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    char min=2e9;
    char mx=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>mx){
            mx=s[i];
        }
        if(s[i]<min){
            min=s[i];
        }
    }
    cout << mx<< " " << min;
}