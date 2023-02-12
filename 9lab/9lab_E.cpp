#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string,int> m;
    while(n--){
        string x;
        cin >> x;
        m[x]++;
    }
    int cnt=0;
    map <string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        if(it->second==3){
            cnt++;
        }
    }
    cout << cnt;
}