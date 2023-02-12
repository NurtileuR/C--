#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    string s;
    char c;
    cin>>s>>c;
    int l,r;
    if(s.find(c)>=0 && s.find(c)<=s.size()){
        l=s.find(c);
    }
    if(s.find_last_of(c)>=0 && s.find_last_of(c)<=s.size()){
        r=s.find_last_of(c);
    }
    if(l==r)
        cout<<r;
    else
        cout<<l<<" "<<r;
}