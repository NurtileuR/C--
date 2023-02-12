#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    int size1, size2;
    cin >> size1 >> size2;

    vector<int> arr1(size1);
    vector<int> arr2(size2);

    for(int i = 0; i < size1; i++){
        cin >> arr1[i];
    }

    for(int i = 0; i < size2; i++){
        cin >> arr2[i];
    }

    vector<int>::iterator it1 = unique(arr1.begin(), arr1.end());
    vector<int>::iterator it2 = unique(arr2.begin(), arr2.end());

    arr1.resize(distance(arr1.begin(), it1));
    arr2.resize(distance(arr2.begin(), it2));
    it1 = arr1.begin();
    it2 = arr2.begin();

    vector<int> a3;

    int size3 = arr1.size() + arr2.size();
    int curr = 0;
    int stopedAt = 0;
    for(int i = 0; i < size3; i++){
        if(i % 2 == 0){
            if(it1 != arr1.end()){
                a3.push_back(*it1);
                it1++;
            }else{
                curr = i;
                stopedAt = 1;
            }
        }else{
            if(it2 != arr2.end()){
                a3.push_back(*it2);
                it2++;
            }else{
                curr = i;
                stopedAt = 2;
            }
        }
    }

    if(curr != size3 - 1 && stopedAt == 1){
        for(;it2 != arr2.end(); it2++){
            a3.push_back(*it2);
        }
    }else if(curr != size3 - 1 && stopedAt == 2){
        for(;it1 != arr1.end(); it1++){
            a3.push_back(*it1);
        }
    }


    vector<int>::iterator it3 = unique(a3.begin(), a3.end());
    a3.resize(distance(a3.begin(), it3));
    it3 = a3.begin();

    for(;it3 != a3.end(); it3++){
        cout << *it3 << " ";
    }
}