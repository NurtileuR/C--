#include <iostream>
using namespace std;
int main(){
    int n;
    int max=-2e9;
    int min=2e9;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>max){
            max=a;
        }
        if(a<min){
            min=a;
    }
}
    cout << min << " " << max;
}