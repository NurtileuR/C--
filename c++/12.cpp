#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    string a;
    int n=0;
    cin>>s;
    for(int i=1;i<=count(s.begin(), s.end(), '1');i++){
        for(int j=n;j<s.size();j++){
            n++;
            if(s[j]=='0'){
                a.push_back('0');}
            else 
                break;

        }
        a.push_back('1');
        int zero=count(a.begin(), a.end(), '0');
        char b='a'+zero;
        cout<<b;
        a.clear();
        zero=0;
    }

}