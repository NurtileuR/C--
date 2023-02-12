#include <iostream>
using namespace std;

int print(int n){
    if(n==1){
        return 0;
    }
    else if(n<=1){
        return 1;
    }
    return print(n-1)+print(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << print(n);
}