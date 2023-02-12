#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin >> n;    
    for(int i=0;i<=n;i++){
        if(i<15){
    cout << (unsigned long long)(pow(i,i)) << " ";
    }
    if(i==15){
    cout << (long long)(pow(15,15))-17;
        }
    }
}