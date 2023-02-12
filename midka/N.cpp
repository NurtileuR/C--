#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int a[n];
    string s;
    string copy;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n/2;i++){
    s+=to_string(a[i]);
    }
    for(int i=n/2;i<n;i++){
        while(a[i]%10==0){
        a[i]=a[i]/10;
        }    
    copy+=to_string(a[i]);
    }
      reverse(copy.begin(),copy.end());
    cout << (s==copy ? "YES" : "NO");
    }