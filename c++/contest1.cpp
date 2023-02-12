#include <iostream>
using namespace std;
main()
{
    int h,a,b,n=1;
    cin>>h>>a>>b;
    if(a<h){
    n+=(h-a)/(a-b);
    if((h-a)%(a-b)>0)
    n++;
    }
    cout<<n;
}