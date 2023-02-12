#include <iostream>
using namespace std;
int main(){
    string s;
    int a[10];
    cin >>s;
    for(int i=0;i<10;i++){
        a[i]=0;
    }
    for(int i=0;i< s.size();i++){
        a[int(s[i]-'0')]++;
    }
    int max=-1,min=2e9;
    for(int i=0;i<10;i++){
        if(a[i]==0)continue;
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    cout << (max == min ? "YES" : "NO");
}