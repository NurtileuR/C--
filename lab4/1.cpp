#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >>n>>m;
    int min1 =2e9;
   int r;
    int min =2e9;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j< m;j++){
        cin >> a[i][j];
    }
    }
      for(int i=0;i<m;++i){ 
        int sum =0;
        for(int j=0;j<n;++j){
            sum += a[i][j];
            if(min1 >a[i][j]){
               min1 = a[i][j];}
            
           if(min > sum){
            min = sum;
            r=i;}
            }
            cout<< sum;}
            cout << endl;
            
    cout<< min1<< " " << endl << r+1;}

        
    
