/*Leetcode 516...Revise...
Given a string s, find the longest palindromic subsequence's length in s.
A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of 
the remaining elements.

Example 1:
Input: s = "bbbab"
Output: 4
Explanation: One possible longest palindromic subsequence is "bbbb".

Example 2:
Input: s = "cbbd"
Output: 2
Explanation: One possible longest palindromic subsequence is "bb".
 
Constraints:
1 <= s.length <= 1000
s consists only of lowercase English letters.*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int helper(string& s1,string& s2,int i,int j){
    if(i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]) return 1+helper(s1,s2,i-1,j-1);
    else{
        int take=helper(s1,s2,i-1,j);
        int leave=helper(s1,s2,i,j-1);
        return dp[i][j]=max(take,leave);
    }
}
int longestPalindromeSubseq(string s) {
    string str=s;
    reverse(str.begin(),str.end());
    int n=s.size();
    dp.resize(n,vector<int>(n+1,-1));
    return helper(s,str,n-1,n-1);
}
int main(){
    string s="bbbab";
    cout<<longestPalindromeSubseq(s);
}