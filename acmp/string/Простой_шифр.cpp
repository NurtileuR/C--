#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<'z') || (s[i]>='A' && s[i]<'Z')){
        s[i]=s[i]+1;
    }
    else if(s[i]='z'){
    s[i]=s[i]-25;
    }
    else if(s[i]='Z'){
        s[i]=s[i]-25;
    }
    }
    cout << s;
}