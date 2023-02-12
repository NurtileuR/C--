#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
 int n,k=0;
 map<int,int> m;
 while(cin>>n){
  k++;
  if(m[n]==0)
  cout<<"NO"<<endl;
  else
  cout<<"YES"<<endl;
  m[n]++;
 }
}