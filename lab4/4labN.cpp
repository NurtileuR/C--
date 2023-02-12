#include <iostream>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n];
   
    for (int i =2;i<=n;i++){ 
        int p=1;
        for(int j=2;j*j<=i;j++){
      if(i%j==0){
        p=0;
        break;
      }    
        }
      if(p) cout << i << " is prime"<<endl;
    }

}