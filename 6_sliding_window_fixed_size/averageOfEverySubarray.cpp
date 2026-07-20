#include <iostream>
#include <vector>
using namespace std;

vector<double> average(vector<int>& arr,int k){
    vector<double> ans;
    int left=0;
    double sum=0;
    for(int right=0;right<arr.size();right++){
        sum+=arr[right];
        if(right-left+1==k){
            ans.push_back(sum/k);
            sum-=arr[left];
            left++;
        }
    }
    return ans;
}