#include <iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    if(n<a || n+m-a<b)
    cout << "No";
   else if (n>=a && n+m-a>=b){
        cout <<"Yes";
    }
}