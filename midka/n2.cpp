#include <iostream>
#include <algorithm>
using namespace std;
int getSum(string s) {
  int sum = 0;
  for(int i = 0; i < s.size(); i++) {
    sum += int(s[i] - '0');
  }
  return sum;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    string s="";
    string copy;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n/2;i++){
    s= s+ to_string(a[i]);
    }
    for(int i=n/2;i<n;i++){
        while(a[i]%10==0){
        a[i]=a[i]/10;
        }    
    copy= copy + to_string(a[i]);
    }
    cout << (getSum(s)==getSum(copy) ? "YES" : "NO");
    }