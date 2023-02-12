#include <iostream>
using namespace std;

void a(int n){
    if(n == 0){
        return;
    }
    cout << n % 10 << " ";
    a(n / 10);
}
int main(){
    int n;
    cin >>n;
    a(n);
}
