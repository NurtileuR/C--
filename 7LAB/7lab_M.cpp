#include <iostream>
using namespace std;

int print(int n,int i=1){
    if(i==n){
        return i;
    }
        cout << i << " ";
    return print(n,++i);
}

int main(){
    int n;cin >>n;
    cout << print(n);
}