#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n,x;
    cin >> n >> x;
    for(int i=-60;i<=60;i++){
        if(n*pow(2,i)==x){
            cout << "YES ";
            cout <<i;
            return 0;
        }
    }
    cout << "NO";
}