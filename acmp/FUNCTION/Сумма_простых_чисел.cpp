#include <iostream>
using namespace std;
bool prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    
    int sum=0;
    for(int i=0;i<3;i++){
        int n;cin >> n;
        if(prime(n)){
            sum+=n;
        }
    }
    cout << sum << endl;
    cout << (prime(sum)==true ? "YES" : "NO");
    }
