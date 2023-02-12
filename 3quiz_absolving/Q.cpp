#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    string t="@gmail.com";
    for(int i=0;i<n;i++){
        if(s[i].find(t) != -1){
        cout <<  s[i].erase(s[i].size()-10) << endl;
    }
    }
}