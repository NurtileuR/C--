#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        int cnt=0;
        for(int i=0;i<s.size();i++){
    
        if(s[i]=='a' || s[i]=='o' || s[i]=='i' || s[i]=='y' || s[i]=='u' || s[i]=='e'){
            cnt++;
        }
        
    }
    cout << s[s.size()-cnt];
}
}