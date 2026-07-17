#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int maxArea=0;
        while(l<r){
            int curArea = min(height[l], height[r])*(r-l);
            maxArea=max(curArea,maxArea);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxArea;
    }
};