#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int x,x1,y,y1;
    cin >> x >> y >> x1 >> y1;
    double a;
    a=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
    cout << setprecision(10) << fixed;
    cout <<a;
}