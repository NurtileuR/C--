#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector <pair<string,int>> v;
    vector <string> s;
    vector <int> num;

    while(n--){
        string x;
        int y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    for(int i=0;i<v.size();i++){
       s.push_back(v[i].first);
       num.push_back(v[i].second);
    }
    sort(num.begin(),num.end());
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        cout << s[i] << " " << num[i] << endl;
    }
}