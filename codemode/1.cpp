#include <isotream>
using namespace std;
int main(){
    int l,r;
    cin >> l >> r;
    int cnt =0;
    bool flag = true;
    for(int i=l;i<=r;i++){
        if(i==o || i==1){
            continue;
        }
        for(int j=2;j<i;j++){
        if(i%j==0){
            flag = false;
            break;
        }}
        if(flag==true){
        cout << i << " ";
        cnt++
    }
    else if(flag=false){
    flag = true;
    }
    }
    cout <<endl <<cnt;
}