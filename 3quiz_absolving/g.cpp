#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n,cnt=0;
    cin >> n;
    vector <char> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cnt=0;
    for(int j=0;j<s.size();j++){
        if(v[i]==s[j]){
            cnt++;
        }
    }
    cout << v[i] << " - " <<cnt << endl;
    }
}