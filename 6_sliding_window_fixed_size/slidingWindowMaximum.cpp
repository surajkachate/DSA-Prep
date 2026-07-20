#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k){
        vector<int> ans;
        deque<int> dq;   // Stores indices
        int left = 0;
        for (int right = 0; right < arr.size(); right++){
            // Remove smaller elements
            while (!dq.empty() && arr[dq.back()] <= arr[right]) dq.pop_back();
            dq.push_back(right);
            if (right - left + 1 == k){
                // Maximum of current window
                ans.push_back(arr[dq.front()]);
                // Remove element leaving the window
                if (dq.front() == left) dq.pop_front();
                left++;
            }
        }
        return ans;
    }
};