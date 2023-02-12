#include <iostream>
using namespace std;
int main() {
  int x,y;
  cin >> x >>y;
  int a=1;
  for(float i=x; i < y; i+=i/10)
  
    a++;
    cout<<a;
  
}