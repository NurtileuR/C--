#include <iostream>
using namespace std;

bool str(string s,int n){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            cnt++;
        }
    }
    return cnt >= n ? true : false;
}
int main(){
    string s;
    int n;
    cin >>s >> n;
    bool ok = str(s,n);
    cout << (ok ? "YES" : "NO");
}