#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 0;
    while(n > pow(2, i)){
        i++;
    }
    if(pow(2, i) == n) cout << "YES";
    else cout << "NO";
}