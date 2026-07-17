#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isCharVowel(char x){
        char ch=tolower(x);
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    string reverseVowels(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            if(isCharVowel(s[l]) && isCharVowel(s[r])) swap(s[l++],s[r--]);
            else if(!isCharVowel(s[l])) l++;
            else r--;
        }
        return s;
    }
};