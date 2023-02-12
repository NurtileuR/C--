#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int i = 0;
    int b;
    while ( n>0){
        if(i%2==0){
            b+=4;
        }
        i++;

        if(i%2==1){
            b-=3;
        }
        i++;

        if(i%7==0){
            continue;}
        i++;
    }
     cout <<i;
}