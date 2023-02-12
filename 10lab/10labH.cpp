#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <map>


using namespace std;


map <string, bool> p;
map <int, bool> in;


void print(vector<int> v){
    vector<int>::iterator it;
    string p1="";
    for(it = v.begin(); it != v.end(); it++){
        p1+=to_string(*it);
        p1+=" ";
    }

    if(!p[p1]){
        for(it = v.begin(); it != v.end(); it++){
            cout << *it << " ";
        }
        
        p[p1] = true;
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int e;
        cin >> e;
        if(!in[e]){
            v.push_back(e);
        }
        in[e] = true;
    }

    do{
        print(v);
    }while( next_permutation(v.begin(), v.end()) );
}
