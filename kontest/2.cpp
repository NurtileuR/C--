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
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int x;
        cin >> x;
        int cnt=0;
        for(int j=0;j<n;j++){
            int sum=0;
            for(int k=0;k<m;k++){
                sum+=a[j][k];
                if(sum>=x){
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}