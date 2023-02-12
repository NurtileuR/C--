#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cin >> n;
     int m; cin >> m;
     int c,d; cin >> c>> d;
    for (int i = n; i<=m;i++){
        if(i % d == c) {
    cout << i << " ";
    
}
    }
        }