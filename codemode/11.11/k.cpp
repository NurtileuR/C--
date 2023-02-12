#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> l(n);
    vector <int> r(n);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    for(int i=0;i<n;i++){
        cin >> r[i];
    }
    int t;
    cin >> t;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(l[i]<=t && t<=r[i]){
            cnt++;
        }
    }
    cout << cnt;
}