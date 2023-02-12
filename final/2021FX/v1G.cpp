#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    vector <int> v;
    int min =2e9;
    int index;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<m;j++){
            if(a[i][j]<0){
                cnt++;
                v.push_back(cnt);
            }
        }
        if(cnt < min){
            min = cnt;
            index = i;
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i+1]){
            cout << "Numbers are equal";
            return 0; 
        }
    }

    cout << index+1;
}