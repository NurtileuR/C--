#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cin >> n;
    int max = -100000000;
    int second_max = -1000000000;
     while (cin >> n){    
        if(n == 0) {
            break;
        }
  
    if (max < n){
        second_max = max;
        max = n;
    }
     }
     cout << second_max;}