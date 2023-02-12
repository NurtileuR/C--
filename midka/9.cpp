#include <iostream>
using namespace std;

void even(int n){
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cout << a[i]<<" ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    even(n);
}