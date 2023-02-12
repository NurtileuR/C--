#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n % 2 == 0 and n!=0)
        cout << "Even";
    else if (n % 2 == 1)
        cout << "Odd";
    else  if (n == 0)
        cout << "None";

    return 0;
}
