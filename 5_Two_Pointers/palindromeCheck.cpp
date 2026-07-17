#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(string &s){
    int left=0;
    int right=s.size()-1;

    while(left<right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;
    }

    return true;
}