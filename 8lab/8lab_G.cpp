#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> s(n);
    for(int i=0;i<s.size();i++){
        cin >> s[i];
    }
    int m;
    cin >> m;
    bool flag;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        for(int j=2;j<sqrt(s[i]);j++){
            if(s[i]%j==0){
                flag=false;
            }
        }
        if(flag==true){
            if(s[i]>m){
                cnt++;
            }
        }
         else if(flag == false) {
            flag = true;
    }
    }
    cout << cnt;
}
