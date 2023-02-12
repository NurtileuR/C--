#include <iostream>
using namespace std;
int print(string s,int i=0,int cnt=0){
    if(i==s.size()){
        return cnt;
    }
    if(s[i]%2==0){
        cnt++;
    }
    i++;
    return print(s,i,cnt);      
}
int main (){
string s;cin >> s;
cout << print(s);
}