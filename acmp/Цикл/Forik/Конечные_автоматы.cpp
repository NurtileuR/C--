#include <iostream>
using namespace std;
int main(){
    int k;cin>>k;
    int d;
    for(int i=0;i<k;i++){int m;
        int n;cin >>n;
        cin >> m;
       d=19*m + (n + 239)*(n + 366) / 2;
       cout << d<< "\n";
    }
}