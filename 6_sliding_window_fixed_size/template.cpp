#include <iostream>
#include <vector>
using namespace std;

void slidingWindow(const vector<int>& arr, int k){
    int n = arr.size();
    int left = 0;
    int sum = 0;
    for (int right = 0; right < n; right++){
        sum += arr[right];
        if (right - left + 1 == k){
            // Process window
            cout << "Window Sum = " << sum << endl;
            sum -= arr[left];
            left++;
        }
    }
}
int main(){
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    slidingWindow(arr, k);
    return 0;
}