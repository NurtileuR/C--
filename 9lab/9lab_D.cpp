#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,k;
    cin >> n>>k;
    int cnt=0;

    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    for(int i=0;i<v.size();i++){
        if(v[i]==k){
            cnt++;
        }
    }
    
    cout << cnt;
}