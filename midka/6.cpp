#include <iostream>
using namespace std;

int main(){
    int n;cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;
            // cin >> a[i][j];
           
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){ 
            if(i+j==n-1){
                a[i][j]= 1;
                
            }
            
                a[n-1][j]= 1;
                a[i][n-1]= 1;
            
            cout << a[i][j]<< " ";
}
cout << endl;
}}