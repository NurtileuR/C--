#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string,double> m;
    double sum=0;
    while(n--){
      int k;
      cin >> k;
      
      
      while(k--){
        string x;
        double y;
        cin >> x >> y;
        m[x]+=y;
        sum+=y;
      }
    }
    map <string,double> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout << it->first << " " << it->second*100/sum << endl;
    }

}