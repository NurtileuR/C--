#include <iostream>

using namespace std;

bool print(string s,int i=0){
     int n=0,m=0;
    int cnt1=0,cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==64){
            cnt++;
            n=i;
        }
        if(s[i]==46){
            cnt1++;
            m=i;
        }
    }
    if(cnt1==1 && cnt==1){
        if(m>n){
        return true;
    }
    }
    return false;
}
int main(){
    string s;
    cin >> s;
  cout << (print(s)==true ? "Yes" : "No");
  }
