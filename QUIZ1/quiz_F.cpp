#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,y,x1,y1,x2,y2;
    cin >> x>>y>> x1>>y1>>x2>>y2;
    if(x<=x2 && x1 >= x2 && y >=y2 && y1<=y2){
        cout<<"yes";
    }
    else{
        cout <<"no";
    }
}