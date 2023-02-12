#include <iostream>

using namespace std;

int main(){
    string t;
    cin >> t;
    for(int i=0;i<t.size();i++){
        if(t[i] >='a' && t[i]<='z'){
        cout << t[i];
           }
    }
}