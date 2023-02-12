#include <iostream>
using namespace std;

int print(int n,int sum=0){
    cin >> n;
    if(n==0){
        return sum;
    }
    sum+=n;
    return print(n,sum);
}

int main(){
    int n;
    cout << print(n);
}