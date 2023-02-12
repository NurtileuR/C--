#include <iostream>
using namespace std;

void print(int n){
    int a[n], max=-2e9,min=2e9, cnr=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0; i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    
    for(int j=min;j<max;j++){
        if(a[i]!=a[j]){
        cnr++;
    }
}
    }
    cout << cnr;
}
int main(){
    int n;
    cin >>n;
    print(n);
}
