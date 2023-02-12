#include <iostream>
using namespace std;
int main(){
    string s;
    int n;
    cin >> n >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]+n>=91){
        s[i]=(s[i]+n)-26-n;
        }
        s[i]=s[i]+n;
        
    }
    cout << s;
}
