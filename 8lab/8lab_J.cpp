#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector <int> s(n);
    int min=2e9;
    int max=-2e9;
    for(int i=0;i<s.size();i++){
        cin >> s[i];
        if(s[i]>max){
            max=s[i];
        }
        if(s[i]<min){
            min=s[i];
        }
    }
    cout << max-min;
}