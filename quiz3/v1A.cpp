#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> a;
    int x; 

    while(cin >> x){
        
        if(x==0){
            break;
        }
        a.push_back(x);
        sort(a.begin(),a.end());
    }
    for(int i=0;i<a.size();i++){
        cout << a[i] <<  " ";
    }}