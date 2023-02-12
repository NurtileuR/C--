#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void toBinary(int x){
    vector <int> a;
    while(x > 0){
        a.push_back(x%2);
        x /= 2;
    }
    for(int i = a.size() - 1; i >= 0; i--){
        cout << a[i];
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(auto now: a){
        toBinary(now);
        cout << endl;
    }
}