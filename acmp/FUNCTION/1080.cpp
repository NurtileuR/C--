#include <iostream>
using namespace std;

void get(int arr[],int n,int i){
    for(int j=0;j<n;j++){
        cout << arr[i] << endl;
        break;
    }
}
void rsq(int arr[],int n,int l,int r){
    int sum=0;
    for(int i=l;i<=r;i++){
        sum+=arr[i];
    }
    cout << sum<< endl;
}
void update(int arr[],int n,int l,int r,int x){
    for(int i=l;i<=r;i++){
        arr[i]=x;
    }
}
void add(int arr[], int size, int l, int r, int x){
    for(l; l<=r; l++){
        arr[l] += x;
    }
}
void rmq(int arr[],int n,int l,int r){
    int min=2e9;
    for(int i=l;i<=r;i++){
        if(arr[i] < min){
            min=arr[i];
        }
    }
    cout << min << endl;
}
void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int length; cin >> length;
    int arr[length];
    for(int i = 1; i <= length; i++){
        int l ; cin >> l; arr[i] = l;    
    }
    int queries; cin >> queries;
    for(int j = 0; j < queries; j++){
        string s; cin >> s;
        if(s == "add") {
            int q, w, r;
            cin >> q >> w >> r;
            add(arr, length, q, w, r);
            }
        if(s == "get"){
            int i;
            cin >> i;
            get(arr,length,i);
        }
        if(s== "update"){
            int l,r,x;
            cin >> l >> r >> x;
            update(arr,length,l,r,x);   
        }
        if(s=="rsq"){
            int l,r;
            cin >> l >> r;
            rsq(arr,length,l,r);
        }
        if(s=="rmq"){
            int l,r;
            cin >> l >> r;
            rmq(arr,length,l,r);            
        }
    }
}