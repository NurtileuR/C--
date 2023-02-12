#include <iostream>
using namespace std;
int main(){
    int a,b,c,ca,cb,cc,sum;
    cin>> a >>b>> c >>ca>> cb >> cc>>sum;
    if(a*ca+b*cb+c*cc<=sum){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}