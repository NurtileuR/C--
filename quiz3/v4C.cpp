#include <iostream>
using namespace std;
int main(){
    string s;
    int sum=0;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            sum+=s[i]-48;
        }
    }
    cout << sum;
}