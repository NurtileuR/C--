#include <iostream>
using namespace std;
int main (){
    int n; cin >> n;
    int Odd = 0;
    int Even = 0;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if ( a%2 == 0){
         Even++;}
    else {
        Odd++;
    }
    }
    cout << Even << " " << Odd;
}