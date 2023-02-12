#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i=0;i<a.size();i++){
            cin >> a[i];
        }
        int l,r;
        cin >> l >> r;
        reverse(a.begin()+l,a.begin()+r+1);
        for(int i=0;i<a.size();i++){
            cout << a[i] << " ";
        }
    }