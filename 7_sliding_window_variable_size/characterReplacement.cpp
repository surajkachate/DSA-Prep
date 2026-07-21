#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int> freq(26,0);
        int maxFreq=0;
        int ans=0;
        int left=0;
        for(int right=0; right<n; right++){
            maxFreq = max(maxFreq, ++freq[s[right]-'A']);
            while((right-left+1)-maxFreq > k){
                freq[s[left]-'A']--;
                left++;
            }
            ans=max(ans, right-left+1);
        }
        return ans;
    }
};