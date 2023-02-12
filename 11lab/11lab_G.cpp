#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){
  int n; cin >> n;

  map<string, set<int>> m;
  for(int i = 0; i < n; ++i){
    string name; cin >> name;
    int day; cin >> day;
    m[name].insert(day);
  }

  map<string, set<int>> :: iterator it;
  for(it = m.begin(); it != m.end(); ++it) {
    cout << it->first << " ";
    if(it->second.size() >= 3) {
      cout << "+1";
    } else {
      cout << "NO BONUS";
    }
    cout << endl;
  }
}