#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    long long x;
    cin >> n >> x;
    vector <int> s(n);
    for(int i=0;i<s.size();i++){
        cin >> s[i];
    }
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(x==s[i]+s[j]){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}