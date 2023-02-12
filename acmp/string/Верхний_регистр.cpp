#include <iostream>
using namespace std;
int main(){
    char n;
    cin >> n;
    if(n>='a' && n<='z'){
        cout << char(n-32);
        return 0;
    }
    if(n>='A' && n<='Z'){
        cout << n;
        return 0;
    }
    cout << n;
}