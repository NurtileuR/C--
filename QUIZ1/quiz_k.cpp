#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
       
    int i = 1;
    while(n > 0){
        
        if(i%7==0){
            n = n;
        }
        else if(i % 2==0){
            n-=4;
        }
        else if(i%2==1){
            n+=3;
        }
        
        i++;
    }
    cout << i;
}
