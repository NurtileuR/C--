#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    reverse(v.begin(),v.begin()+m);
    reverse(v.begin()+m,v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}