#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;   
    int a[n][n];
    for(int i=1;i<=n;i++){
        for(int j =0; j < n; j++){
            if(i+j==n){
                cout << i;
            }
    else{
        cout<< ".";

    }}
    cout << endl;}
}