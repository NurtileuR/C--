#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt1=0,cnt2=0,cnt3=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            cnt1++;
        }
        if(s[i]>='a' && s[i]<='z'){
            cnt2++;
        }
        if(s[i]>='A' && s[i] <='Z'){
            cnt3++;
        }
    } 
        if(cnt1>=1 && cnt2 >=1 && cnt3 >=1 && s.size() >= 12){
            cout << "Yes";
            return 0;
        }
        cout << "No";
    }
