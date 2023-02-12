#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void logout(vector<int> input){
    for(int i = 0; i < input.size(); i++){
        cout << input[i] << " ";
    }
    cout << endl;
}

vector<int> sliceVector(vector<int> input, int till){
    vector<int> res;
    for(int i = 0; i <= till; i++){
        res.push_back(input[i]);
    }
    return res;
}


bool isPalindrome(vector<int> arr){
    int first = 0;
    int second = arr.size() - 1;
    while(first < second){
        if(arr[first] != arr[second]){
            return false;
        }
        first++;
        second--;
    }
    return true;
}


void findP(vector<int> input, bool &found){
    bool isPal = isPalindrome(input);
    int middle = input.size() / 2;
    vector<int> defaultV = input;

    if(isPal){
        sort(input.begin(), input.begin() + middle);
        vector<int> first_part = sliceVector(input, middle - 1);
        vector<int> init_first = sliceVector(defaultV, middle - 1); 
        if(first_part == init_first){
            logout(defaultV);
            found = true;
        }
    }
}


int main(){
    int size;
    cin >> size;
    bool found = false;

    vector<int> arr(size);

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    do{
        findP(arr, found);
    }while(next_permutation(arr.begin(), arr.end()));



    if(!found){
        cout << "Impossible" << endl;
    }
}