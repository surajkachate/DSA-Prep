#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        while(l<r){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
};