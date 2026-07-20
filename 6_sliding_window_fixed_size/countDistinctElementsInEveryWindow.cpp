#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> countDistinct(vector<int>& arr, int k){
    vector<int> ans;
    unordered_map<int, int> freq;
    int left = 0;
    for (int right = 0; right < arr.size(); right++){
        // Add current element
        freq[arr[right]]++;
        // Window is complete
        if (right - left + 1 == k){
            ans.push_back(freq.size());
            // Remove outgoing element
            freq[arr[left]]--;
            if (freq[arr[left]] == 0) freq.erase(arr[left]);
            left++;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;
    vector<int> ans = countDistinct(arr, k);
    for (int x : ans) cout << x << " ";
    return 0;
}