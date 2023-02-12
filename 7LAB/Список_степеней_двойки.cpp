#include <iostream>
using namespace std;
int main(){
    int n;
    int min = 100000000;
    int count = 2;
    cin >> n;if(n==0 || n<0){
            cout << n;
            return 0;
        }
    while(count <= n){
        
        if(n % count == 0 && min > count){
            min = count;
            count++;
        }
        else
            count++;
    }
    cout << min;
    return 0;
}