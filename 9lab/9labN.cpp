#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    pair <int,int> p;

    vector <int> v;
    for(int i;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int cnt = 0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i] ^ v[j] == v[j]) {
                cnt++;
            }
        }
    }
    cout << cnt;
}