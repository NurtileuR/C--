#include <iostream>
using namespace std;

void LuckyTicket(string s){
        int sum=0;
        int last;
        for(int i=0;i<s.size();i++){
            sum+=(s[i]-'0');
            last=(s[i]-'0')%10;
        }
        
        if(sum % last==0){
            cout << "YES";
            return ;
        }
        else{
            cout <<"NO";
            return ;
        }
        
    
}
int main(){
    string s;
    cin>> s;
    LuckyTicket(s);
}
