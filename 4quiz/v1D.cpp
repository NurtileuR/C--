#include <iostream>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;

    for(int i=0;i<s.size();i++){
       for(int j=i+1;j>=0;j--){
        if((s.substr(i,t.size())).find(t)!=-1){
            cout << i << " ";
        }
        break;
        }
    }
}