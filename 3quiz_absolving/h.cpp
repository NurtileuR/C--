#include <iostream>
#include <vector>
#include <map>

using namespace std;

double print(int n){
    map <string,double> m;
    double min=2e9;

    for(int i=0;i<n;i++){
        string s;
        double x,y;
        cin >> s >> x >> y;
        m[s]=(x/y);
    }
    string d;
    map <string,double>  :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if(it->second < min){
            min=it->second;
            d = it->first;
        }
    }
    cout << d;
}
int main(){
    int n;
    cin >> n;
    print(n);
}