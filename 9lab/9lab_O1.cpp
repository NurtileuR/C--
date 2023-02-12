#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    map <string, string> m;

for(int i = 0; i < n; i++) {
    string name, password;
    cin >> name >> password;
    m[name] = password;
}
int q;cin >> q;
map <string, string> :: iterator it;
while(q--) {
   string name, password;
   cin >> name >> password;
   bool flag = false;
   for(it = m.begin(); it != m.end(); it++) {
     if(name == it->first) {
        flag=true;
        if(password == it->second) {
            cout << "correct possword" << endl ;
        }
        else{
            cout << "possword error\n";
        }
     }
   }
   if(flag == false) {
      cout << "login error" << endl;
   }
}
}