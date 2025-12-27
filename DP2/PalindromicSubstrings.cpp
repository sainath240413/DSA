/*Leetcode 647...revise...
Given a string s, return the number of palindromic substrings in it.
A string is a palindrome when it reads the same backward as forward.
A substring is a contiguous sequence of characters within the string.

Example 1:
Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".

Example 2:
Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
 
Constraints:
1 <= s.length <= 1000
s consists of lowercase English letters.*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
bool isPalindrome(int i,int j,string& s){
    if(i>=j) return true;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==s[j] && isPalindrome(i+1,j-1,s)){
        return dp[i][j]=1;
    }
    else return dp[i][j]=0;
}
int countSubstrings(string s) {
    int n=s.size(),count=0;
    dp.resize(n,vector<int>(n,-1));
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(isPalindrome(i,j,s)){
                count++;
            }
        }
    }
    return count;
}
int main(){
    string s="abc";
    cout<<countSubstrings(s);
}