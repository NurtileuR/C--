#include <iostream>
using namespace std;
string s="";
string toBinRec(int n){
    if(n==0){
        return s;
    }
    s= char((n%2)+48)+s;
    return toBinRec(n/2);

}
int main(){
    string s;
    string s1="";
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            s1+=s[i];
           
        }
        else{
            cout << s[i];
            s1="";
        }
    } 
    cout << toBinRec(stoi(s1));
}