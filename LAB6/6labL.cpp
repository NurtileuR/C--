#include <iostream>
using namespace std;

void LabL(string s, int n){
    
    int cnt=0;
    for (int i=0;i<s.size();i++){
        if (s[i]>='0' && s[i]<='9'){
            cnt++;
            }
        }
    
    cout << (n<=cnt ? "Valid" : "Not valid");   
}
int main(){
    string s;
    int n;
    cin >> s >> n;
    LabL(s,n);
}