#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n][n];
    int max=-2e9;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>> a[i][j];
    }}int r=0,c=0;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(i==j){
                if(max<a[i][j]){
                    max= a[i][j];
                    r=i;
                    c=j;
                }
            }
           
}
        }
        cout << "Maximum element is: "<< max<< " with coordinates: " << r+1 << ";" << c+1;

 }