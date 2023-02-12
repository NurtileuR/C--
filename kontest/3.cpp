#include <iostream>
using namespace std;
int sum=0;
int Arr(int n,int m){
    if(n==m){
        sum=sum+m;
        return sum;
    }
    sum+=n;
    return Arr(n+1,m);
}
int main(){
    int n;
    int m;
    cin >> n >> m;
    cout << Arr(n,m);
}