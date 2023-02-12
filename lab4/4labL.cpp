#include <iostream>
using namespace std;
int main(){
    int n,m;cin >> n >> m;
    int a[n][m];
   
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;
    int sum=0; int row=0, column=0;
    for (int j=0;j<m;j++){
        
        int min=2e9;
        for (int i=0;i<n;i++){
           if(min>a[i][j]){
            min=a[i][j];
           
           row=i+1;
           column=j+1;}}
           cout << row << ";" << column << endl;
           sum += min;
           
    }
    cout << endl;
    cout <<"Their sum:"<< endl<< sum;
}