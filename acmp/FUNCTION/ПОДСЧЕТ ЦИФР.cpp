#include <iostream>
using namespace std;

void print(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
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