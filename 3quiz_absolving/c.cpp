#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ggg(int n,int m){
    int r=n%m;
    if(r==0){
        return m;
    }
    return ggg(m,r);
}

int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> g;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
         for(int j = i + 1; j < n; j++){
        g.push_back(ggg(a[i],a[j]));
    }
    }
    sort(g.begin(),g.end());
    for(int i=0;i<g.size();i++){
       cout << g[g.size()-1];
       break;
    }
}