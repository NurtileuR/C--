#include <iostream>
using namespace std;

void Sum(string s){
    cin >> s;
    int sum =0;
    for(int i=0;i<s.size();i++){
        sum+=(s[i]-'0');
    }
    cout << sum;
}
int main(){
    string n;
    Sum(n);
}