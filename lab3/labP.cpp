#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;cin >> n;
    for(int i =0; i <= sqrt(n);i++){
        if (i*i == n){
            cout << "Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}