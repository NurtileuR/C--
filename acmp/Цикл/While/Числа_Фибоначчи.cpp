#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int first = 0, second = 1, result=0, cnt = 0;
    while(n>cnt){  
        first = second;
        second = result;
        result = first + second;
        cnt++;
    }
    cout << result;
}