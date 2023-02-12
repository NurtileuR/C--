#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(long long i=0; i <= n;i++){
        long long pow1;
        pow1 = pow(2,i);
        cout << pow1<< endl;
    }
}