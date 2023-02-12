#include <iostream>

using namespace std;

void strtoBool(string s){
    if(s=="1"){
        cout << "true";
    }
    else if(s=="0"){
        cout << "false";
    }
    else{
        cout << s;
    }
}

int main(){
    string s;
    cin >> s;
    strtoBool(s);
}