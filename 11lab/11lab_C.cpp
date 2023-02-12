#include <iostream>
#include <map>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(pair<string, double> a, pair<string, double> b)
{
    if(a.second == b.second) {
      return a.first > b.first;
    }
    return a.second > b.second;
}

int main(){
    int n;
    cin >> n;
    
    map <string,double> m;
    vector <pair <string, double>> v;
    double sum=0;
    while(n--){
        string x;
        cin >> x;
        double y;
        cin >> y;
        m[x]+=y;
        sum+=y;
    }
    map <string,double> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        v.push_back(make_pair(it->first, it->second));
    }
    sort(v.begin(), v.end(), cmp);
    
    for (int i=0;i<v.size();i++) {
        cout << v[i].first << ' '
             << v[i].second/sum*100  << "%"<< endl;
    }
}