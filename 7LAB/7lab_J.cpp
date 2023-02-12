#include <iostream>
using namespace std;

int print(string s,int sum=0,int i=0){
    if(i==s.size()){
        return sum;
    }
    sum+=(s[i]-'0')/2;
    return print(s,sum,++i);
}

int main(){
    string n;
    cin >> n;
    cout<< print(n);
}