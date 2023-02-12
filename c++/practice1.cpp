#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
   
    cin >> a >> b;
if (a < b){ 
    cout << " a is smaller then b ";
}
else if ( a > b){
    cout << "a is larger then b";
}
else {
    cout << "a is equal to b ";
}
return 0;
}