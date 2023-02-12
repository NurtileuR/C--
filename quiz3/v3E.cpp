#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector <int> s(n);
    for(int i=0;i<s.size();i++){
        cin >> s[i];
    }
    sort(s.begin(),s.begin()+k-1);
    sort(s.begin()+k,s.end());
    reverse(s.begin()+k,s.end());
    for(int i=0;i<s.size();i++){
        cout << s[i] << " ";
    }
}
