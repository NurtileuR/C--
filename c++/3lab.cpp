#include <iostream>
using namespace std;
int main(){
    int n;
    int result = 0;
    cin >> n;
    int ost1 = n % 2;
    n /= 2;
    int ost2 = n % 2;
    n /= 2;
     int ost3 = n % 2;
    n /= 2;
     int ost4 = n % 2;
    n /= 2;
    result = result + ost1 * 8+ ost2* 4 + ost3*2 + ost4;
    cout << result;}