#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt=0,cntmax=0;
    for(int i=0;i<n;i++){
        int t;
        cin >>t;
        if(t>0){
            cnt++;
        }
        else{
            cnt=0;
        }
        if(cnt>cntmax){
            cntmax=cnt; 
        }
    }
    cout<< cntmax;
}