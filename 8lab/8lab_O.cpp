#include <iostream>
#include <set>
using namespace std;
int main(){
    string n;
    cin >> n;
    set <char> s;
    for(int i=0;i<n.length();i++){
        if(n[i]>='A' && n[i]<='Z'){
        n[i]=n[i]+32;
        }
        s.insert(n[i]);
    }
    cout << s.size() << endl;
    set <char> :: iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout  << *it << " ";
    }
}