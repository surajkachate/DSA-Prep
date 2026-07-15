#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void backtrack(vector<int>& arr, int remain, int idx, vector<int>& path, vector<vector<int>>& ans) {
        if (remain == 0) {
            ans.push_back(path);
            return;
        }
        if (idx == arr.size() || remain < 0) return;
        // take arr[idx]
        path.push_back(arr[idx]);
        backtrack(arr, remain - arr[idx], idx, path, ans);
        path.pop_back();
        // skip arr[idx]
        backtrack(arr, remain, idx + 1, path, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> path;
        backtrack(candidates, target, 0, path, ans);
        return ans;
    }
};