#include <iostream>

using namespace std;

int sum(string s,int sum1=0){
    for(int i=0;i<s.size();i++){
    sum1+=s[i];
    }
    return sum1;
}
bool Boris(string s,int i=0){
    int sum1=0;
    if(sum(s,sum1) < 300){
        return false;
    }
    return true;
    Boris(s,++i);
}

int main(){
    string s;
    cin >> s;
    int sum1=0;
    cout << (Boris(s) ? "It is tasty!" : "Oh, no!");
}