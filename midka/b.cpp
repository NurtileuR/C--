#include <iostream>
using namespace std;
int a[100][100];
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    for(int i=0;i<k;i++){
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++){
              a[i][j]++;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                cnt++;
            }
        }
    }
    cout << cnt;
}