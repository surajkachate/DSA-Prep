#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> firstNegative(vector<int>& arr, int k){
    vector<int> ans;
    queue<int> q;          // Stores indices of negative numbers
    int left = 0;
    for (int right = 0; right < arr.size(); right++){
        if (arr[right] < 0) q.push(right);
        if (right - left + 1 == k){
            if (q.empty()) ans.push_back(0);
            else ans.push_back(arr[q.front()]);
            // Remove indices that are leaving the window
            if (!q.empty() && q.front() == left) q.pop();
            left++;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    vector<int> ans = firstNegative(arr, k);
    for (int x : ans) cout << x << " ";
    return 0;
}