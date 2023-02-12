#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, m, i = 2, k;
    cin >> n >> m >> k;
    vector <int> v;
    v.push_back(1);
    while(i <= n || i <= m){
        if(n % i == 0 && m % i == 0){
            v.push_back(i);
        }
        i++;
    }
    reverse(v.begin(), v.end());
    cout << v[k-1];
}