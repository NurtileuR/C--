#include <iostream>
using namespace std;

bool diveder(int n,int p=1){
    if(n==p){
        return true;
    }
    else if(p>n){
        return false;
    }
    return diveder(n,p*2);
    }
    int main(){
        int n;
        cin >> n;
        if(diveder(n)==true){
            cout << "Yes";
        }
        else {
            cout << "No";
        }
    }