#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s="";
    int cnt=0;

do{
  s = char(n%2+48) + s;
  n /= 2;
}while(n);
 for(int i=0;i<s.size();i++){
        if(s[i]-48==1){
            cnt++;
        }
    }
    cout << cnt;
}