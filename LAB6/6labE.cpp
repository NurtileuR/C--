#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void print( double c){
    int a,b;
    
    cin >> a >> b;
    c=sqrt((a*a+b*b));
    cout << setprecision(4);
    cout << c << endl;
}
int main(){
    int n;
    print(n);
}