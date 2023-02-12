#include <iostream>
using namespace std;

void print(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                cnt++;
        }
    }
    cout << cnt;
}
    int main(){
        string s;
        getline(cin,s);
        print(s);
    }