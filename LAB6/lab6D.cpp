#include <iostream>
using namespace std;

void Find(int n){
    int m;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=0;i<n;i++){
        if(m==a[i]){
            cout <<"Yes";
            return;
        }
    }
    cout <<"No";
}
int main(){
    int n;
    cin >> n;
    Find(n);
}