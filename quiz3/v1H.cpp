#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;cin >> n;
    int k;cin >> k;
    vector <int> v(n);
    for(int i=0;i<v.size();i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[k];
        break;
    }
    }