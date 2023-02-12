#include <iostream>
using namespace std;
string s="";
int pr(int n){
    if(n==0){
        return s;
    }
    s=char((n%2) +48) + s;
    return print(n/2);
}

int main(){
    int n;
    cin >> n;
    cout << print(n);
}