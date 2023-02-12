#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int a=(n/1000)%10;
    int b=(n/100)%10;
    int c=(n/10)%10;
    int d=n%10;
    if(a==d && b==c){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}