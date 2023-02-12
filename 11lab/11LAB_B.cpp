#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set <int> s;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    if(n==s.size()){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}