#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int sum=0;
        int ans=INT_MIN;
        for(int right=0; right<n; right++){
            sum += nums[right];
            if(right-left+1==k){
                ans = max(ans, sum);
                sum -= nums[left];
                left++;
            }
        }
        return (double)ans/k;
    }
};