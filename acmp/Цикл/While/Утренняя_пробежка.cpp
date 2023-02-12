#include<iostream>
using namespace std;
int main()
{
int x,y,k=1;
cin>>x>>y;
x*=100;
y*=100;
while(x<=y)
{
x*=1+15/100.;
k++;
}
cout<<k;
}