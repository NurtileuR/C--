#include <iostream>
using namespace std;

void degree(int n){
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        cout << a[i]*a[i]<< " ";
        sum+=a[i]*a[i];
    }
    cout <<endl;
    cout <<sum;

}
int main(){
    int n;
    cin >>n;
    degree(n);
}