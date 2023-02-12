#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    for(int i=0;i<n;i++){
        int a;cin >> a;
        while(a%10==0){
            a=a/10;
        }
        s+=to_string(a);
    }
     string copy = s;
    reverse(copy.begin(), copy.end());
   cout << (copy==s ? "YES" : "NO");
}