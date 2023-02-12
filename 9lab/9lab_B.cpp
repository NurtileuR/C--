#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;

    vector <int> v(n);
    vector <int> Even;
    vector <int> Odd;
    
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            Even.push_back(v[i]);
        }
        if(v[i]%2==1){
            Odd.push_back(v[i]);
        }
    }
    
    sort(Even.begin(),Even.end());
    reverse(Even.begin(),Even.end());

    sort(Odd.begin(),Odd.end());

    for(int i=0;i<Even.size();i++){
        cout << Even[i] << " ";
    }
    for(int i=0;i<Odd.size();i++){
        cout << Odd[i] << " ";
    }
}