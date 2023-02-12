#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long a,b,c,d;
    cin >>a >>b >>c >>d;
    for(int x=-100;x<=100;x++){
        if((a*pow(x,3)+b*pow(x,2)+c*x+d)==0){
            cout << x << " ";
            
        } 
    }

}