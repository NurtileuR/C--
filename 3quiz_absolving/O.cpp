#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    char t;
    int cnt=0,cntmax=0;
    for(int i=1;i<=s.size();i++){
        if(s[i-1]==s[i]){
           cnt++;
        }
        else{
            cnt=0;
        }
        if(cnt>cntmax){
            cntmax=cnt;
            t=s[i];
        }
    }
        if(cntmax==0){
            cout << s[0] <<  " " << cntmax+1;
        }
        else{
    cout <<t << " " <<  cntmax+1;
}
}