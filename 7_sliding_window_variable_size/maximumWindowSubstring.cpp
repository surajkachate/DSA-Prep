#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        for (char c : t) need[c]++;
        int required = need.size();   
        int formed = 0;               
        unordered_map<char, int> window;
        int left = 0;
        int minLen = INT_MAX;
        int start = 0;
        for (int right = 0; right < s.size(); right++) {
            char ch = s[right];
            window[ch]++;
            if (need.count(ch) && window[ch] == need[ch]) formed++;
            while (formed == required) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }
                char leftChar = s[left];
                window[leftChar]--;
                if (need.count(leftChar) &&
                    window[leftChar] < need[leftChar]) {
                    formed--;
                }
                left++;
            }
        }
        if (minLen == INT_MAX) return "";
        return s.substr(start, minLen);
    }
};