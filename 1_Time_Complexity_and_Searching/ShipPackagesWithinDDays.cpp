#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int currentWeight = 0;
        int requiredDays = 1;
        for (int w : weights) {
            if (currentWeight + w > capacity) {
                requiredDays++;
                currentWeight = 0;
            }
            currentWeight += w;
        }
        return requiredDays <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = INT_MIN;
        int high = 0;
        for (int i = 0; i < n; i++) low = max(low, weights[i]);
        for (int i = 0; i < n; i++) high += weights[i];
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (canShip(weights, days, mid)) high = mid;
            else low = mid + 1;
        }
        return low;
    }
};