#include <iostream>
#include <stack>

using namespace std;

int main(){
    string s;
    cin >> s;

    stack <char> t;

    for(int i=0;i<s.size();i++){
        if(s[i]=='1' && !t.empty() && t.top()=='1'){
            t.pop();
        }
        else {
            t.push(s[i]);
        }
    }  

    string d="";

    while(!t.empty()){
        d = t .top() + d;  
        t.pop();
    }
    cout << d;
}
