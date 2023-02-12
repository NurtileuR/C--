#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n,z,x;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>z;
    int q=0,h=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>z){
            for (int j=2;j<a[i0];j++){
                if(i%j==0)
                    q++;
            }
            if(q==0){
            h++;
        }
        }
        q=0;
    }
    cout<<h;
}