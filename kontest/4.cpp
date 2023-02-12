#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool Alikhan(int n,int m){
    if(n%2==0){
    if(n/2<m){
        return true;
        }   
    }
    if(n%2==1){
        if((n/2)+1<=m)
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    vector <string> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector <string> b(m);
    vector <string> c;
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            c.push_back(a[i]);
        }
    }
    sort(c.begin(),c.end());
    cout << "Missed students:" << endl;
    for(int i=0;i<c.size();i++){
        cout <<"- "<<  c[i] << endl;
    }
    cout << (Alikhan(n,m)==true ? "Alikhan is OK" : "Alikhan is angry");
    }