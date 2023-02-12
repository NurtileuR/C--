#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

bool print(pair <string, int> l, pair <string,int> r){
    if(l.second == r.second){
        return l.first > r.first;
    }
    return l.second > r.second;
}
int main(){

    map <string,int> m;
    vector <string> v;

    string s;
    getline(cin,s);
    istringstream iss(s);

    for(string t; iss >> t;){
        v.push_back(t);
    }
    int cnt = 1;

    for(int i=0;i<v.size();i++){
        m[v[i]]+=cnt;
        }
    
    vector <pair<string,int>>  cmp;

    map <string,int> :: iterator it;
    
   for(it=m.begin();it!=m.end();it++){
    cmp.push_back(make_pair(it->first,it->second ) );
   }
   
   sort(cmp.begin(),cmp.end(),print);

    for(int i=0;i<cmp.size();i++){
        cout << cmp[i].first << " : " << cmp[i].second << endl;
    }
}