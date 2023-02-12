#include <iostream>
#include <cmath>
#include <vector>
#include <set>
#include <unordered_map>
#include <utility>
using namespace std;

int main(){
    int n, x1, y1;
    cin >> x1 >> y1 >> n;
    vector <int> x;
    vector <int> y;
    vector <double> dist;
    multiset <pair<double, int>> m;
    for(int i = 0; i < n; i++){
        int x2, y2;
        cin >> x2 >> y2;
        x.push_back(x2);
        y.push_back(y2);
    }

    for(int i = 0; i < n; i++){
        double dis = sqrt((x[i] - x1) * (x[i] - x1) + (y[i] - y1) * (y[i] - y1));
        m.insert({dis, i});
    }
    for(auto now: m){
        cout << x[now.second] << " " << y[now.second] << endl;
    }
    
}