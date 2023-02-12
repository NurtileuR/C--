#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string s,d;
    cin >>s >> d;
    int k;
   for(int i=0;i<s.size();i++){
        for(int j=0;j<d.size();j++){
            if((abs(s[0]-d[0])==1 && abs(d[d.size()-1]-s[s.size()-1])==1) || (s[0]==d[0] && abs(d[d.size()-1]-s[s.size()-1])==1) ||(s[s.size()-1]==d[d.size()-1] && abs(s[0]-d[0])==1)){
                cout << "King" << "\n";
                k=1;}
       if((d[0]==s[0] || d[d.size()-1]==s[s.size()-1]) || abs(s[0]-d[0])==abs(s[s.size()-1]-d[d.size()-1])){
                cout << "Queen" << "\n";
                k=1;
       }
        if(d[0]==s[0] || d[d.size()-1]==s[s.size()-1]){
                cout << "Rook" <<endl; 
                k=1;
        }
            
        if(abs(s[0]-d[0])==abs(s[s.size()-1]-d[d.size()-1])){
            cout << "Bishop" << "\n";
            k=1;
       }
 
      if(s[0]==d[0]&&s[s.size()-1]!=1+'0'){
if (s[s.size()-1]==2+'0' &&s[s.size()-1]+2==d[d.size()-1] || s[s.size()-1]+1==d[d.size()-1]){cout<<"Pawn";
k=1;}
       }
     if((abs(s[s.size()-1]-d[d.size()-1])==1 && abs(s[0]-d[0])==2) || (abs(s[s.size()-1]-d[d.size()-1])==2 && abs(s[0]-d[0])==1)){
        cout << "Knight";
        k=1;}    
      if(k!=1){
            cout << "Nobody";
     
        }
        break;
   }
   break;
}
}