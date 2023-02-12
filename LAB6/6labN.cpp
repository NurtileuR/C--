#include <iostream>
using namespace std;

void arr(int n, int m){
     cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << a[j][i] << " ";
        }
    cout <<"\n";
    }
}

int main(){
    int n,m;
    arr(n,m);
    }