#include <iostream>
#include <algorithm>

using namespace std;

bool print(int n,int k,int a[],int i=0){
    if(i==n-1){
        return false;
    }
    if(a[i+1]-a[i] <=k){
        return true;
    }
    print(n,k,a,++i);
}
int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    sort(a,a+n);
    cout << (print(n,k,a) ? "cheater" : "no");
}
