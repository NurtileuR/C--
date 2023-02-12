#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int k=0;
    for(int i=1;i<=n;i++){
        int h;
        cin >> h;
        if(k==0){
            if(h<=437){
                k=i;
            }
        }
    }
    if(k!=0){
        cout<<"Crash "<<k;
    }
    else{
        cout << "No crash";
    }
}