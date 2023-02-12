#include <iostream>
using namespace std;

void arr(int n,int m){
    int a[n][m];
    int max=-2e9;
    int r=0, c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max< a[i][j]){
                max=a[i][j];
                r=i;
                c=j;
            }
        }
}
cout << r << " " << c;
}
int main(){
    int n,m;
    cin >> n >> m;
    arr(n,m);
}