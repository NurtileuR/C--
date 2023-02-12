#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> l1;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string l; cin >> l; l1.push_back(l);
    }
    string s = "a";
    for(auto i : l1){
        if(s.size()<i.size()){
            s = i;
        }
    }
    cout << s;

}