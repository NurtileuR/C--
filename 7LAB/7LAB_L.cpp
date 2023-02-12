#include <iostream>
#include <algorithm>
using namespace std;

bool Pollindrome(string s){
    string copy=s;
    reverse(copy.begin(),copy.end());
    if(copy==s){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s;
    cin >>s;
    cout << (Pollindrome(s) ? "Yes" : "No");
}