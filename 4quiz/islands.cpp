#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;
void observing(vector <vector <char> >& v, int i, int j) {
    if(i < 0 || j < 0 || i >= v.size() || j >= v[i].size() || v[i][j] == '0' || v[i][j] == '+') {
        return;
    }
    v[i][j] = '+';
    observing(v, i + 1, j);
    observing(v, i - 1, j);
    observing(v, i, j + 1);
    observing(v, i, j - 1);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector <vector <char> > v;
    for(int i = 0; i < n; i++) {
        vector <char> tmp;
        for(int j = 0; j < m; j++) {
            char c; cin >> c;
            tmp.push_back(c);
        }
        v.push_back(tmp);
    }

    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            if(v[i][j] == '1') {
                cnt++;
                observing(v, i, j);
            }
        }
    }
    cout << cnt << endl;

    return 0;
}