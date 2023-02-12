#include <iostream>
using namespace std;
int main(){
    int s,m,x,y;
    cin >> s >> m;
    for(x=1;x<s;x++){
        y=s-x;
        if(x*y==m){
            cout << x << " " << y;
            break;
        }
    }
}