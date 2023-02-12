#include <iostream>
using namespace std;

char print(string s,int i=0,char max='0'){
    if(i==s.size()){
        return max;
    }
    if(s[i]>max){
        max=s[i];
    }
    return print(s,++i,max);
}

int main(){
    string n;cin>>n;
    cout << print(n);

}