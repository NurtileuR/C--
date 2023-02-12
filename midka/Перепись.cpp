#include <iostream>
using namespace std;
int main(){
    int n,k=-1;
    cin >> n;
    int mx=-2e9;
    for(int i=1;i<=n;i++){
        int age,gender;
        cin>>age >> gender;
        if(age>mx && gender!=0){
            mx=age;
            k=i;
        }
    }
    cout << k;
}