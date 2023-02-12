#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int first=0,second=1,result=0, i=0;
    while(result<n){
        first=second;
        second=result;
        result=first+second;
        i++;
    }
    if(result==n){
        cout << 1 << endl << i;
    }
    else{
    cout << 0;   
}
}