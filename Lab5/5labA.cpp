#include <iostream>
// #include <string>
using namespace std;
int main(){
    string s; cin >> s;
    int  cntUpper =0, cntLower = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] >= 'a'&& s[i]<= 'z'){
            cntLower++;
        }
            else{
                cntUpper;
            }
        }
        cout << cntLower<< " " <<cntUpper;
    }
