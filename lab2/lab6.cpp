#include <iostream>
using namespace std;
int main (){ 
    int n; 
    int i=0;
    int sum=0;
    cin >> n;
while (i <= n ){ 
    sum += i;

    i++;
}
cout << sum;
return 0;
}