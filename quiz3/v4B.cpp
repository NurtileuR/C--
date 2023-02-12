#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,s1;
    cin >> s >> s1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    if(s.size()==s1.size()){
        if(s1==s){
            cout  << "YES";
            return 0;
        }
    }
    cout << "NO";
}