#include <iostream>
using namespace std;
int main(){
	int n;cin >> n;
	int a[n][n];
	int r=0, c= 0;
	int max=-10000000;
	for(int i = 0;i < n;i++){
		for(int j = 0;j<n;j++){
		
		cin >> a[i][j];
	}}
	for(int i=0;i<n;i++){
		for(int j = 0;j<n;j++){
		if (max<a[i][j]){
			max= a[i][j];
			r=i+1;
			c=j+1;
		}
	
	}
	
	}
	
	cout <<r << " "<< c;}