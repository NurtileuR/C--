#include <iostream>
using namespace std;

void UPP(char s){
    if(s>='a' && s<='z'){
    cout << (char)(s-32);
    }
    else if(s>='A' && s<='Z'){
        cout << char(s);
    }
}
int main(){
    char s;
    cin >> s;
    UPP(s);
}