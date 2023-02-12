#include <iostream>

using namespace std;
int main(){
    int n;cin>> n;
    int a[n][n];
    for(int i = 0;i < n;i++){
		for(int j = 0;j<n*2-1;j++){
		    if(i*2==j-1 || j+i== n*2-1){
		        cout << "[X]";
		    }
		    else{
		        cout << "-";
		    }
  
       }
       cout << endl;}}