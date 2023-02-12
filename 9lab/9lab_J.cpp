#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0;
    map <string,int> m;
    while(n--){
        string s;cin >> s;
        int k;cin >> k;
        m[s]+=k;
    }
    map <string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout << it->first << " " << it->second << endl;
    }
}