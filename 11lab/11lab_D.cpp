#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    bool flag;
    cout << "---------" << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(a[i][j]==0 || a[i][j]){
            flag=false;
        }       
        cout << a[i][j] << " ";
        }
        cout << endl;
    }

}