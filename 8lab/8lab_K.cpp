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
    sort(s.begin(),s.end());
    int k;
    cin >> k;
    int sum=0;
    s.erase(s.begin(),s.begin()+n-k);
    for(int i=0;i<s.size();i++){
        sum+=s[i];
    }
    cout << sum;
}