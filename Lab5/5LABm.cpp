#include <iostream>
using namespace std;
int main(){
    string s;
    char x;
    int n;
    int cnr=0;
    cin >> s>> x>> n;
    for(int i=0;i<s.size();i++){
        if(s[i]==x){
            cnr++;
        }
        else if(s[i]!=x){
            continue;
        }
    }
    cout << (cnr==n ? "YES" : "NO");
    }