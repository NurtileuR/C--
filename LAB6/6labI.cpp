 #include <iostream>
 using namespace std;
 void str(string s){
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            if(s[i]>='a' && s[i]<='z'){
            s[i]= s[i]-32;
        }}
        cout << s[i];
    }

 }
 int main(){
    string s;
    cin >> s;
    str(s);
 }