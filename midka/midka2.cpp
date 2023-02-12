#include <iostream>
using namespace std;
int main(){
    int n;
    cin  >> n;
    int a[n];
    int max=-2e9;
    int max2=-2e9;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(max< a[i]){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>max2 && a[i]!=max){
            max2=a[i];
        }
    }
    cout << max*max2;
}