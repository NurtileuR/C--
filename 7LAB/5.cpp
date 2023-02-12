#include <iostream>
#include <vector>
using namespace std;

void print(int n,int m){
    if(n%2==0){
        if(n/2>=m){
            cout << "Alikhan is angry";
        }
        else{
        cout << "Alikhan is OK";
    }
    }
    if(n%2==1){
        if(((n/2)+1)>m){
            cout << "Alikhan is angry";
            
        }
        else{
        cout << "Alikhan is OK";
    }
    }
}
int main(){
    int n,m;
    cin >> n;
    vector <string> a(n);
    
    for(int i=0;i<a.size();i++){
        cin >> a[i];
    }
    cin >> m;
    vector <string> b(m);
    for(int i=0;i<b.size();i++){
        cin >> b[i];
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       if(a[i]==b[j]){
        a[i]="";
        b[j]=a[i];
       cout << b[j];
        //  break;

       }
    } 
    }
}
// print(n,m);
