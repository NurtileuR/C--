#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    set <int> :: iterator it;
    int sum=0;
    for(it = a.begin();it!=a.end();it++){
        sum+=*it;
    }
    cout << sum;
}