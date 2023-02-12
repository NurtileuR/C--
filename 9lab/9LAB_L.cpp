#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector <pair <int,int>> v;
    int sum=0;

    for(int i=1;i<=n;i++){
        int x,y;
        cin >> x >> y;
        int sum1=0,sum2=0;
        sum1+=x;
        sum2+=y;
        sum=sum1+sum2;
        v.push_back(make_pair(sum,i));
    }
    
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout << v[i].second << " ";
    }
}