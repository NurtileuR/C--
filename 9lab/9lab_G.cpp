#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
   getline(cin,s);
    
    for(int i=0;i<s.size();i++){
        if(s[i]==49){
        if(s[i]==s[i+1]){
            s[i]=0;   
            s[i+1]=0; 
        }
        }
    }
    cout << s;
}