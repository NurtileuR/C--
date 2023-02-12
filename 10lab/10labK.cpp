#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


bool Prime(int el){
    if(el == -1 || el == 1 || el == 0){
        return false;
    }

    for(int j = 2; j <= sqrt(abs(el)); j++){
        if(abs(el) % j == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int cnt = count_if(a, a+n, Prime);

    
    cout << cnt;
    return 0;

}