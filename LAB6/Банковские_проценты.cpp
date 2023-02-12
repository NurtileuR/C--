#include <iostream>
using namespace std;
int main(){
    int x, p, y;
    cin >> x >> p >> y;
    int cnt = 0;
    while(x < y) {
        int procent = (x * p) / 100;
        x += procent;
        cnt++;
    }
    cout << cnt;
}