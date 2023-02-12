#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long i=0;
    long long a;
    while(n>=pow(2,i)){
        a=pow(2,i);
        cout << a << " ";
        i++;
        }
}