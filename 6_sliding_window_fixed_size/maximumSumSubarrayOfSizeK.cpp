#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int left=0;
        int sum=0;
        int ans=INT_MIN;
        for(int right=0; right<n; right++){
            sum += arr[right];
            if(right-left+1==k){
                ans = max(ans, sum);
                sum -= arr[left];
                left++;
            }
        }
        return ans;
    }
};