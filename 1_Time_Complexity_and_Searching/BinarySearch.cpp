#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    // Recurssion 
     int solve(vector<int>&nums, int target, int l, int h){
        if(l>h) return -1;
        int m = (l+h)/2;
        if(nums[m]==target){
            return m;
        }
        else if(nums[m]<target){
            return solve(nums, target, m+1, h);
        }
        else{
            return solve(nums, target, l, m-1);
        }
    }

    // Loop 
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        // solve(nums, target, low, high);
        while(low<=high){
            int mid = (high+low)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
};