#include <iostream>
#include <queue>

using namespace std;

int main(){
    vector <char> q;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            if(s[i+1]=='1'){
                s[i]=0;
                s[i+1]=0;
            }
           
        }
         q.push_back(s[i]);
    }
    for(int i=0;i<q.size();i++){
        cout << q[i];
    }
}
