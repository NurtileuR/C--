#include <iostream>
#include <algorithm>
using namespace std;

void arr(int n){
    int a[n][n];
    int s=n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout <<" * ";
            }
            else if(i+j==n-1){
                cout <<" * ";
            }
            else if(s==j || s==j){
                cout <<" * ";
            
            }
            else{
                cout << " . ";
            }
        }
        cout << "\n";}
        // cout << s;
}

int main(){
    int n;
    cin >> n;
    arr(n);
}