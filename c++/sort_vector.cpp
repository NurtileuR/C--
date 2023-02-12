#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{   int n; cin >> n;
    vector <int> name(n);
    for(int i=0;i <n; i++){
       cin >>name[i];
    }
 
    sort(name.begin(), name.end());

 
    for (int i=0;i<n;i++) {
        cout << name[i] << ' ';
    }
 
    return 0;
}