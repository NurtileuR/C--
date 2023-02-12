#include <iostream>

using namespace std;

int a[9];

int main(){
    int n;

    while(cin >> n){
        if(n == 0){
            break;
        }
        a[n]++;
    }

    for(int i=1;i<=9;i++){
        cout << a[i] << " ";
    }
}