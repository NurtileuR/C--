#include <iostream>
using namespace std;

int main(){
    int n, mult = 1;; cin >> n;
    int sum=0;
    
       
        while(n>0)
        {
            sum += n%10;
            mult *= n % 10;
            n /=10;
        }

    cout <<sum+mult;
}