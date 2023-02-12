#include <iostream>
using namespace std;
int main(){
    char n;
    cin >> n;
    if(n>='0' && n<='9'){
        cout << "Yes";
        return 0;
    }
    cout << "No";
}