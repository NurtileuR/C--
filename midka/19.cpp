#include <iostream>
using namespace std;
int main(){
    int n;
    int cnt=0;
    int prev = -1e9;
    while(cin>> n){
       if( n==0){
        break;
       }     
       if(prev < n){
        cnt++;
       }
       prev=n;
    }
    cout << cnt -1;
}
