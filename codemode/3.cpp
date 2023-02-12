#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n][n];
    int c,b;
    for(int i =0 ; i< n;i++){
        for(int j =0 ; j <n; j++){
            a[0][j]=1;
            a[i][0]=1;
            c=a[i-1][j];
            b=a[i][j-1];
            a[i][j]=c+b;
        }
    }
    for(int i =0 ; i< n;i++){
        for(int j =0 ; j <n; j++){
            cout << a[i][j] << " ";
}
cout << endl;}}