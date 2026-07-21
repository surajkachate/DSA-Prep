#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int ans=0;
        for(int x: nums){
            if(x==1){
                cnt++;
                ans=max(cnt,ans);
            }else cnt=0;
        }
        return ans;
    }
};