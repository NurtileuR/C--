#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            a[0][j]=j;
            a[i][0]=i;
            a[i][j]=i+j;
        }
    }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
      }

    
}