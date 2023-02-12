#include <iostream>
using namespace std;
void Max(int n) {
    n =4;
    int a[n];
    int max = -2e9;
    for ( int i=0; i<n;i++ ){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]> max){
            max = a[i];
        }
    }
    cout << max;
}
int main(){
    int n;
    Max(n);
}