#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        i++;
    }
}
