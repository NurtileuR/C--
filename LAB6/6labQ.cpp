#include <iostream>
#include <iomanip>
using namespace std;

void print(double n){
    double a,b;
    cin >> a >>b;
    n= b*100/a;
    cout << setprecision(6);
    cout << n;
}
int main(){
    int n;
    print(n);
}