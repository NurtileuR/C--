    #include <iostream>
    using namespace std;
    int main(){
    int n;
    cin >> n;
    int m;cin >> m;
    if(n>0)
   cout << n%m;
else if(n<0 && m>0)
    cout <<n-(n/m-1)*m;
    
    else if(n<0 && m<0){
    cout <<n-(n/m+1)*m;

    }    }