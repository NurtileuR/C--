#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> a;
    vector <string> tr;
    map <char, int> dic;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        a.push_back(s);
        if(s.size() == 1){
            cout << "NO COMMON CHARACTERS";
            return 0;
        }
    }
    string w = a[0];
    int k = w.size();
    vector <char> let;
    vector <int> freq;
    for(int i = 0; i < 26; i++){
        char l = 'a' + i;
        let.push_back(l);
    }
    for(auto now: let){
        dic.insert({now, 0});
    }
    for(int i = 0; i < n; i++){
        string w = a[i];
        for(int j = 0; j < w.size(); j++){
            for(auto now: dic){
                if(w[j] == now.first){
                    dic[w[j]]++;
                }
            }
        }
    }
    vector <char> print;
    for(auto now: dic){
        if(now.second >= n){
            print.push_back(now.first);
        }
    }
    if(print.size() == 0){
        cout << "NO COMMON CHARACTERS";
        return 0;
    }
    for(auto now: print){
        cout << now << " ";
    }
    
}