#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <pair<pair<string,string>,int>,int> m;
    while(n--){
        string l,r;
        int l1,r1;
        cin >> l >>l1 >> r >> r1;
        m[make_pair(make_pair(l,r),l1+r1)]=l1+r1;
    }
    map <pair <pair < string,string > ,int>,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout << it->first.first.first << " and " << it->first.first.second << " " << it->second << endl;
    }
}