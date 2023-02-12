#include <iostream>

using namespace std;

char arr[16];
int dextoHex(int n){
    if(n<16){
        cout << arr[n];
        return 0;
    }
    dextoHex(n/16);
    cout << arr[n%16];
}
int main(){
    int n;
    cin >> n;
    for(int i='0';i<='9';i++){
        arr[i-'0']=i;
    }
    for(int i=10; i <= 15; i++){
        arr[i]=i+55;
    }
    dextoHex(n);
}