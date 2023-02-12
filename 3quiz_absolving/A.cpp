#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string s; getline(cin, s);
    istringstream iss(s);
    for(string w; iss >> w;){
        string m = "";
        bool flag = false;
        m += w;
        for(int i = 0; i < m.size(); i++){
            if(48 <= m[i] and m[i] <= 57){
                flag = true;
            }
        }
        if(not flag) cout << w << endl;
    }

}