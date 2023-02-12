#include <iostream>
using namespace std;
int main(){
    int n,m;cin  >> n>>m;
    int a[n][m];
    for(int i=0;i <n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int sumrow=0;
        for (int j=0;j<m;j++){
            sumrow+=a[i][j];
        }
        cout <<"The sum of row number" << " " << i+1 <<" is " << sumrow <<' ';
        cout << endl;
    }
    for(int j=0;j<m;j++){
        int sumcolumn=0;
        for(int i=0;i<n;i++){
            sumcolumn+=a[i][j];
        }
        cout <<"The sum of column number" << " " << j+1<< " is " << sumcolumn<< " ";
        cout << endl;
    }
  
}