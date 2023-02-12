#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n;
    cin >> n;
  

    int max=0;
    int maxmax=0;
    
    vector <int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < v.size(); i++){
        for(int j = i - 1; j >= 0; j--){
            if(v[i] <= v[j]){
                max += v[i];
            }
            else{
                break;
            }
        }
        for(int j = i; j < v.size();j++){
            if(v[i] <= v[j]){
                max += v[i];
            }
        else{
            break;
        }
       }
       if(max > maxmax){
        maxmax = max;
       }
       max=0;
    }
    cout << maxmax;
}