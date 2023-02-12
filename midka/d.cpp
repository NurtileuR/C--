#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int Mod[10001];
    int max=-2e9;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<10001;i++){
        Mod[i]=0;
    }
    for(int i=0;i<n;i++){
        Mod[a[i]]++;
    }
    for(int i=0;i<10001;i++){
        if(Mod[i]>max){
            max=Mod[i];
        }
    }
    for(int i=10001;i>=0;i--){
         if(max==Mod[i]){
            cout << i << " ";
        }
    }
    }
