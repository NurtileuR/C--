#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sum=0;
    int n = s.size()-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            sum+=pow(2,n);
        }
        n--;
    }
    cout << sum;
}