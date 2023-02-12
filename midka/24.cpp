#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    string a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0 ;j <m;j++){
            cin >> a[i][j];
        }
    }
        for(int i=0;i<n;i++){
      
        int b[i]=a[0];
        reverse(b,b+n);
        if(b[i]==a[i]){
            cout << "YES" << b[i];
        }
        }

}