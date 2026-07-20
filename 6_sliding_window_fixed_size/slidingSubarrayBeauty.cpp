#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> ans;
        vector<int> freq(51, 0);
        int left = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] < 0) freq[-nums[right]]++;
            if (right - left + 1 == k) {
                int cnt = 0;
                int beauty = 0;
                for (int i = 50; i >= 1; i--) {
                    cnt += freq[i];
                    if (cnt >= x) {
                        beauty = -i;
                        break;
                    }
                }
                ans.push_back(beauty);
                if (nums[left] < 0) freq[-nums[left]]--;
                left++;
            }
        }
        return ans;
    }
};