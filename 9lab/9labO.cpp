#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    unordered_multimap <string,string> m1;
   
    unordered_multimap <string,string> m2;
    
    while(n--){
        string x,y;
        cin >> x >> y;
        m1[x]=y;
    }
    int m;
    cin >> m;
    while(m--){
        string k,l;
        cin >> k >> l;
        m2[k]=l;
    }
    unordered_multimap <string,string> :: iterator it;
    unordered_multimap <string,string> :: iterator its;
    for(it=m1.begin();it!=m1.end();it++) {
        for(its=m2.begin();its!=m2.end();its++){
    
         if(it->first == its->first){
            if(it->second != its->second){
                cout << "password error\n";

            }
            else{
                cout << "correct password\n";
            }
         }
         else{
            cout << "login error\n";
         }
        }
    }
}