#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,x,y;
    int m=0;
    cin >> n >> x >> y;
    if(x>y){
        m=m+y;
    }
    else if(x<y){
        m=m+x;
    }
    else if(x==y){
        m=x;
    }

        int a;
        a=(x+y);
       
        int b=x*y;
       float c=b*(n-1);
        cout << ceil(c/a) +m<< " " << m;

}