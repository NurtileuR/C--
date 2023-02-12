#include <iostream>
using namespace std;
int main(){
    int n,k;
    string s="";
    cin >> n>>k;
    int sum=0,mul=1;
    while(n){
        s=char(n%k+48) + s;
        n/= k;
    }
    for(int i=0;i<s.size();i++){
        sum+=(s[i]-48);
        mul*=int(s[i]-'0');
    }
    cout << mul-sum;
}