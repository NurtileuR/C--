#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    if(n!=0 && n>0){
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    }
    else{Сумма
        for(int i=1;i>=n;i--){
            sum+=i;
        }
    }
    
    cout <<sum;
}