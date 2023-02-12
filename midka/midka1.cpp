#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cin >> n;
    int m; cin >>m;
    int x;cin >> x;
    for(int i=ceil(sqrt(n));i*i<=m;i++){
        if(x==1){
            cout << i*i << " ";
        }
        // else{
        //     break;
        // }
    }
    for(int i=sqrt(m);i*i>=n;i--){
        if(x==-1){
            cout << i*i << " ";
        }
        // else{
        //     break;
        // }
    }
}