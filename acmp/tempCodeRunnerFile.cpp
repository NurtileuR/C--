#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int max=-2e9;
    int max_index=0;
    int l,r;
    cin >> l >> r;
    for(int i=l+1;i<=r;i++){
        if(a[i]>max){
            max=a[i];
            max_index = i;
        }
    }
    cout << max << " " << max_index+1;
}
