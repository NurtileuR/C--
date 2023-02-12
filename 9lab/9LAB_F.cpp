#include <iostream>
#include <vector>

using namespace std;
int main(){
    string s;
    cin >> s;
    
    int cnt1=0,cnt2=0;

    for(int i=0;i<s.size();i++){
    if(s[s.size()-1]== '(' || s[0]==')'){
        cout << "NO";
        return 0;
        }
    }

    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            cnt1++;
        }
        if(s[i]==')'){
            cnt2++;
        }
    }
    cout << (cnt1==cnt2 ? "YES" : "NO");
}