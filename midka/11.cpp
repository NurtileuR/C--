#include <iostream>
using namespace std;
void print(int n){
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<a[i+1]){
            cnt++;
        }
    }
    cout << cnt;
}
int main(){
    int n;
    cin>> n;
    print(n);
}