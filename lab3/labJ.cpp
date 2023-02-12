#include <iostream>
using namespace std;
int main(){
    int n,m; cin >> n >>m;
    int arr[n];
    
    for(int i = 0;i < n;i++){
        cin >> arr[i];}
        if(arr[0] > m){
            cout << 0;
            return 0;
        }
        if(arr[n-1] <= m){
            cout << n; 
            return 0;
        }
    
    for(int i = 0; i <=n+1;i++){
        if(arr[i] == m){
            cout << i + 1;
            return 0;
        }
       else if (arr[i] < m && arr[i+1] > m){
            cout << i + 1;
            break;
        }
    }

}