#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool prime(int n){
    
    for(int j=2;j < n;j++){
        if(n==0 || n==1){
            continue;
        }
        else if(n==2){
        return true;
    }
        else if(n % j== 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    int n;
    cin >> n;
    
    vector <int> p;
    bool flag;
    p.push_back(2);
    for(int i=0; i<10001;i++){
        if(i==0 || i==1){
            continue;
        }
        if(prime(i)==true){
        p.push_back(i);
        }
   }
    vector <int> primep;
   for(int i=1;i<p.size();i++){
    if(prime(i)==true){
        primep.push_back(p[i]);
    }
   }
    map <int,int> m;
    for(int i=1;i<=primep.size();i++){
        m[i]=primep[i];
    }
    
    map <int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        if(n==it->first){
        cout << it->second;
    }
    }
}