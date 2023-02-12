#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if((j+i+k) ==n )
                cout << i << j << k << endl;    
            }
        }
    }
}