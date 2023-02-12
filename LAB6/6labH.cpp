#include <iostream>
using namespace std;

void even(int n){
    int a = 0;
bool flag = true;
while (n != 0)
{
a = n %10;
if(a % 2 != 0)
{
flag = false;
}
n /= 10;
}
flag?cout << "Valid" : cout << "Not valid";

}
int main()
{

int n; cin >> n;
even(n);
}