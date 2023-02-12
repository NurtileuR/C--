#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int res = 0;
    string str = "";
    while (n != 0){
        int ost = n % 2;
        n = n/2;
        str += (ost + '0');
    }
    for (int i = str.size() - 1; i >= 0; i--){
        res += ((str[i] - '0') * pow(2,str.size() - i - 1));
    }
    cout << res; 
 
    return 0;
} 