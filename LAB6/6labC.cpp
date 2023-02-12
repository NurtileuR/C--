#include <iostream>
#include <algorithm>
using namespace std;
void TwoArr(int n){
    int a[n],b[n], cnr=0;
    int start = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        for(int j = start ;j<n;j++){
            if(a[i]==b[j] ){
                start = j + 1;
                cnr++;
                break;
            }
        }    
    
    }
    cout << cnr;
    // return;
}
int main(){
    int n;
    cin >> n;
    TwoArr(n);
}