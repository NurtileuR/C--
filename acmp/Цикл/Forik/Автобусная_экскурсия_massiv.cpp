#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]<437){
            cout << "Crash " << i << " ";
            break;
        }
        else if(a[i]>437 && a[i+1]>437){
            cout << "No crash";
        }
    }
}