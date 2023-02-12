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
    int k;
    bool flag;
    cin >> k;
    for(int i=0;i<s.size();i++){
        if(s[i]==k){
            flag=true;
        }
    }
    cout << (flag==true ? "Yes" : "No");
}
