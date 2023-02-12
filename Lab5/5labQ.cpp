#include <iostream>
using namespace std; 
int main (){ 
string s1,s2;
 cin>>s1>>s2; 
string a=s1; 
while (s1.length()<s2.length()){
    s1+=a;
    }
    if (s1==s2) {
    cout << "YES";
    return 0;} 
    else {
    cout<< "NO"; 
    return 0; }
}