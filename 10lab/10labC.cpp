#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack <char> t;
    string w = "";
    double n;
    for(int i = 0; i < s.size(); i++){
        if(t.empty()){
            t.push(s[i]);
        }
        else{
            n = (t.top() - '0') * 10 + s[i] - '0';
            if(sqrt(n) == round(sqrt(n))){
                t.pop();
            }
            else{
                t.push(s[i]);
            }
        }

    }
    if(t.empty()){
        cout << "Stack is empty";
    }
    else{
        while(!t.empty()){
            cout << t.top();
            t.pop();
        }
    }
    
}