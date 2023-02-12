#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

bool cmd( pair<pair<string,string>,float> l,pair<pair<string,string>,float> r){
    return l.second > r.second;
}

int main(){
    int n;
    cin >> n;
    vector <pair<pair<string,string>,float>> v;
    map <pair <string,string>, float> m;
    
    for(int i=0;i<n;i++){
        float sum=0,sum1=0;int sumofcre=0; 
        string firstname,lastname, s;
        int num, credit;
        cin >> firstname >> lastname >> num;
        for(int j=0;j<num;j++){
            cin >> s >> credit;
            if(s=="A+"){
                sum=credit*4.00;
            }
            if(s=="A"){
                sum=credit * 3.75;
            }
            if(s=="B+"){
                sum=credit*3.50;
            }
            if(s=="B"){
                sum=credit*3.00;
            }
            if(s=="C+"){
                sum=credit*2.50;
            }
            if(s=="C"){
                sum=credit*2.00;
            }
            if(s=="D+"){
                sum=credit*1.50;
            }
            if(s=="D"){
                sum=credit*1.00;
            }
            if(s=="F"){
                sum=credit*0;
            }
           sum1+=sum;
           sumofcre+=credit;
        } 
            
            m[make_pair(firstname,lastname)]=(sum1/sumofcre);
    }
    
    map <pair<string,string>,float> :: iterator it;

    for(it = m.begin();it!=m.end();it++){
        
        v.push_back(make_pair(make_pair(it->first.first,it->first.second),it->second));   
    }
    sort(v.begin(),v.end(),cmd);

    for(int i=0;i<v.size();i++){
        cout << fixed;
        cout << setprecision(3);
        cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << endl;
    }
}