#include <iostream>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n][n];
    int r0=0, r1=n-1,c0=0,c1=n-1;
    int v=1;
    while(true){
         for(int i=c0;i<=c1;i++){
            a[r0][i]=v;
            v++;
        } 
         if(r0==r1){
            break;
        }
        r0++;
        for(int i=r0;i<=r1;i++){
            a[i][c1]=v;
            v++;
        } if(c0==c1){
            break;
        }
        c1--;
      
       
       
         for(int i=c1;i>=c0;i--){
            a[r1][i]=v;
            v++;
        }
             if(r0==r1){
            break;
        }
        r1--;
      
         for(int i=r1;i>= r0;i--){
            a[i][c0]=v;
            v++;
        }
         if(c0==c1){
            break;
        }
        c0++;
    }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout <<a[i][j]<< " ";
            }
            cout << endl;
        }}
