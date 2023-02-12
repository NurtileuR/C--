#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n >> m;
    int cnt =0;
    int x;
    cin >> 
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> a[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x){
                cnt++;
            }
}
}
cout << cnt;
}
