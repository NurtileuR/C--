#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sum=0;
    int cnt =0;

    if(n<10){
        cout << 0;
        return 0;
    }
    while(n>0){
        sum += n % 10;
        n/=10;

        while(sum>9){
            n+=sum%10;
            sum/=10;
            cnt++;
        }
    }
    cout << cnt+1;
}