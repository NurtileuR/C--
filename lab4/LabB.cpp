#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n][n];
    
    
    for(int i = 0; i < n; i++){
    for( int j = 0; j < n; j++){
        cin >> arr[i][j];
    }}
    int max = arr[0][0];
    int max2= 0;
    for(int i = 0; i < n; i++){
    for( int j = 0; j < n; j++){
        if (max < arr[i][j]){
        max2 = max; 
        max = arr[i][j];
    
        }
         else if( max2 < arr[i][j] && arr[i][j] < max){
            max2 = arr[i][j];
        }
    }
    }
  
    cout << max2;
    return 0;
}