#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n;
    cin >> n;
    queue <string> q;
    while(n--){
        int x;
        string s;
        cin >> x;

        if(x==1){
            cin >> s;
            q.push(s);
        }
        else if(x==2){
            if(!q.empty()){
            q.pop();
            }
        }
        if(q.empty()){
                cout << "queue is empty" << endl;
            }
        if(!q.empty()){
                cout << q.front()<< endl;
            }
    }
}