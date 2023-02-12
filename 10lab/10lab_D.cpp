#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumOfVector(vector<int> v) {
  int sum = 0;
  for(int i = 0; i < v.size(); ++i){
    sum += v[i];
  }
  return sum;
}

bool comp(vector<int> left, vector<int> right) {
  if(sumOfVector(left) == sumOfVector(right)) {
    return left.size() < right.size();
  } else {
    return sumOfVector(left) < sumOfVector(right);
  }
}
int main(){
    int n;
    cin >> n;
    vector <vector<int>> v(n);
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        vector <int> v1(m);
        for(int j=0;j<m;j++){
            cin >> v1[j];
        }
        v[i]=v1;
    }


  sort(v.begin(), v.end(), comp);

    for(int i = 0; i < v.size(); ++i){
        for(int j = 0; j < v[i].size(); ++j){
        cout << v[i][j] << " ";
    }
    cout << endl;
  }
}