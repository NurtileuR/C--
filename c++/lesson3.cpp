#include <iostream>
using namespace std;
int main (){
    bool ok = true;
    while ( ok == true ){
        int x;
        cin >> x;
        if ( x == 0 ){
            ok == false;
            break;
        }
    }
}