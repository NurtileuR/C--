#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> s(n);
    for(int i=0;i<s.size();i++){
        cin >> s[i];
    }
    int a,b;
    cin >> a >> b;
    s.erase(s.begin()+a,s.begin()+b+1);
    for(int i=0;i<s.size();i++){
        cout << s[i] << " ";
    }
}