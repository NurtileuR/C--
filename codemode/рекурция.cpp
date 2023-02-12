#include <iostream>
using namespace std;

int size(int n){
    if(n<1){
        return 0;
    }
    else {
        return 1+size(n/10);
    }
}
int main(){
    int n;
    cin >>n;
    cout << size(n);
}