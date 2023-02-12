#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,int> m;
    for(int i=1;i<=n;i++){
        string x;
        cin >> x;
        if(m[x]==0){
        m[x]=i;
        }
    }
    map <string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout << it->first << " " << it->second << endl;
    }
}