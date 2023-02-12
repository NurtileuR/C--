#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> s(n);
    for(int i=0;i<s.size();i++){
        cin >> s[i];
    }
    int k=0;    
    cin >> k;
    if(find(s.begin(),s.end(),k) != s.end()){
     cout << "Yes";
    }
    else{
    cout << "no";
}
}