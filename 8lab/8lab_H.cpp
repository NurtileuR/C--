#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> s(n);
    for(int i=0;i<s.size();i++){
        cin >> s[i];
    }
    int k;
    cin >> k;
    sort(s.begin(),s.end());
    s.erase(s.begin()+k,s.begin()+n);
    for(int i=0;i<s.size();i++){
        cout << s[i] << " ";
    }
    }
