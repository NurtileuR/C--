#include <iostream>
using namespace std;

void Arr(int n){
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                cout << 1<< " ";
            }
          else if(i+j>n-1){
                cout << 2<< " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >>  n;
    Arr(n);
}