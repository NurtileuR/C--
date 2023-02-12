#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> s;
    vector <int> s1;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s.push_back(x);
        s1.push_back(x);
    }
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]!=s1[i]){
            cout << "Instead of " << s1[i] << " here was " << s[i] << endl;
        }
        else{
            cout << "OK" << endl;
        }
    }
}