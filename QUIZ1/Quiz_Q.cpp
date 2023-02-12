#include <iostream>
using namespace std;
int main(){
    int m,e,f;
    cin >> m >>e >> f;
    if((m+e)>=30 && f>=20 && (m+e+f)>=70){
        cout << "YES!";
    }
    else{
        cout <<"NO.";
    }
}