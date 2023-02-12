#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    map <char, int> m;
    for(int i = 0; i < s.length(); i++){
        m[s[i]]++;
    }
    int cnt = 0;
    for(auto now: m){
        if(now.second % 2 == 1){
            cnt++;
        }
    }
    if(cnt == 0 || cnt == 1){
        cout << "ZA WARUDO TOKI WO TOMARE";
    }
    else{
        cout << "JOJO";
    }
}