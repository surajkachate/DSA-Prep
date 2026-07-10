#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1;   // Search left
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return ans;
}
int lastOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1;    // Search right
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return ans;
}