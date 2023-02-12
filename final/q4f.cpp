#include <iostream>
#include <vector>
#include <algorithm>

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
    vector <int> start;
    vector <int> last;

    vector <int> copyfirst;
    vector <int> copylast;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0){
                start.push_back(a[i][j]);
                copyfirst.push_back(a[i][j]);
            }
            if(i==n-1){
                last.push_back(a[i][j]);
                copylast.push_back(a[i][j]);
            }
        }
    }

    reverse(start.begin(),start.end());
    reverse(last.begin(),last.end());
    
    bool flag;

    for(int i=0;i<start.size();i++){
        if(start[i]==copyfirst[i] && last[i]==copylast[i]){
            flag=true;
        }
        else{
            flag=false;
        }
    }
    
    cout << (flag == true ? "YES" : "NO");

}
