#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int max=-1;
    for(int i=0;i<s.size();i++){
        if (s[i]> max){
            max=s[i];
        }
    }
    cout << (char)max;
}