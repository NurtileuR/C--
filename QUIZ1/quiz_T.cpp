#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum =0;
    long long int a[n];
    for(int i=0; i <n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
    while(a[i]>0){
        sum += a[i]%10;
        a[i] /= 10;}
    
         if(sum%2==0)  cout<< "Sum of digits is even!"  << endl;
         
         else cout << "Sum of digits is odd!" << endl;
         sum=0;
    }
}
       