#include <iostream>
using namespace std;

char arr[36];
int print(int n,int k){
    if(n<k){
        cout << arr[n];
        return 0;
    }
    print(n/k,k);
    cout << arr[n%k];
}

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=48;i<58;i++){
        arr[i-'0']=i;
    }
    for(int i=10;i<36;i++){
        arr[i]=i+55;
    }
    print(n,k);
}