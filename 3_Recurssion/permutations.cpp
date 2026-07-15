#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void f(int index, vector<int>&nums, vector<vector<int>>&ans){
        int n=nums.size();
        if(index==n){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<n;i++){
            swap(nums[i],nums[index]);
            f(index+1,nums,ans);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        f(0,nums,ans);
        return ans;
    }
};