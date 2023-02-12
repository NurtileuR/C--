#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int sum=0;
    cin >> s;
    string t="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            t+=s[i];
        }
        else{cout << s[i];
            if(t.size()!=0){
                
                sum+=stoi(t);
            }
            t="";
        }
    }
        if(t.size()!=0){
            sum+=stoi(t);
        
    }
    cout << sum;
}