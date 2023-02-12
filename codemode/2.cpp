#include <iostream>
using namespace std;


int main() {
   string s;
    getline(cin,s); 
    for(int i=0; i <s.size();i++){
    
    if(s[i]== 32 || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
    cout <<s[i];
    }
        
    }
    
    return 0;
}