#include <iostream>
using namespace std;

void print(int n){
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int b;
    b= a[n-1];
    cout <<b << " ";

    for(int i=0;i<n-1;i++){
        cout << a[i] << " ";
    }

}
int main(){
    int n;
    cin >>n;
    print(n);
}