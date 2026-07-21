#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> wid;
        int left = 0;
        int maxLen = 0;
        for(int right=0; right<s.size(); right++){
            while(wid.count(s[right])){
                wid.erase(s[left]);
                left++;
            }
            wid.insert(s[right]);
            maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};