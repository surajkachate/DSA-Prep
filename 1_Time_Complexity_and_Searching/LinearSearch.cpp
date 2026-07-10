#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4};
    int target=3;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]==target){
            cout<< i;
            break;
        }
    }

    return 0;
}