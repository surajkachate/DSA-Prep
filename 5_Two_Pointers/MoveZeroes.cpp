#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int slow=0;
        for(int fast=0; fast<n; fast++){
            if(nums[fast]!=0){
                swap(nums[slow], nums[fast]);
                slow++;
            }
        }
    }
};