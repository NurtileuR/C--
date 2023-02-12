#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int> m;
    int cnt=0;
    for(int i=1;i<=n;i++){
        int j=0;
        string x;
        cin >> x;
        
        if(m[x]==0){
         cout << "new user added"<< endl;
        }
        
        else{
            cout<< "user already exists" << endl;
        }
        m[x]++;
    }
}