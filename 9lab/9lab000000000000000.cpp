#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector <pair<string,string>> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }

    int m;
    cin >> m;
    while(m--){
        string s,t;
        cin >> s >> t;
        bool flag=false;
        for(int i=0;i<v.size();i++){
            if(v[i].first==s){
                flag=true;
                if(v[i].second==t){
                    cout << "correct password" << endl;
                }
                else{
                    cout << "password error\n";
                }
            }
        }
        if(flag==false){
            cout << "login error\n";
        }
    }
}