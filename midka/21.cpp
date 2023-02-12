#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n<60){
        cout << "0"<< " : "<<"0 : "<< n;
        return 0;
    }
    else if(n>=60 && n<3600){
        cout <<"0 : " <<  n/60 << " : " << n%60; 
        return 0;

    }
    else if( n>=3600){
        cout << n/3600 << " : " << (n%3600)/60 << " : " << (n%3600)%60;
        return 0;
    }
}