#include <iostream>
using namespace std;

bool print(int arr[],int n,int x,int i=0){
        if(i==n){
            return false;
        }
        if(arr[i]==x){
            return true;
        }
        print(arr,n,x,++i);
}

int main(){
    int n;cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int x;cin >> x;
    cout << (print(a,n,x) ? "Yes" : "No");
}