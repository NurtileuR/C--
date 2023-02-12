#include <iostream>
using namespace std;
void print(int n){
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin >> a[n];
    }
    int arr[1000];
    for(int i=0;i<1000;i++){
        arr[i]=0;
    for(int i=0;i<n;i++){
    arr[a[i]]++;

    }}
     for(int i=0;i<n;i++){
        if(arr[i]==0)continue;
        if(arr[i]>max) {max=arr[i];}
        if(arr[i]<min){ min=arr[i];}
    }
    if(max==min){
        cout <<"YES";
    }
    else{cout <<"NO";}
}
    int main(){
        int n;
        cin >> n;
        print(n);
    }