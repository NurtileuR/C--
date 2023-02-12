#include <iostream>
#include <algorithm>
using namespace std;
 
void Revers(int n){
    int a[n];

    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        cout <<a[i] << " ";
}
}
int main(){
    int n;
    cin >> n;
    Revers(n);
}