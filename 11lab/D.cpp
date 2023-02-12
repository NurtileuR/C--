#include <iostream>
using namespace std;

void solve(){
int n, m; cin >> n >> m;
int a[n][m];
bool ok = false;
for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++) cin >> a[i][j];
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        if(a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1] == 4) ok = true;
        else if(a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1] == 0) ok = true;
    }
}
if(ok) cout << "NO";
else cout << "YES";
}

int main(){
    solve();
}