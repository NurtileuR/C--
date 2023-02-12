#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int sum=0;
    int max=-2e9;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if (max<a){
            max=a;
        }
        sum+=a;
    }
    cout << sum << " " << max;
}