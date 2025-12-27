/*Leetcode 1143...revise...
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.
A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative
order of the remaining characters.
For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.

Example 1:
Input: text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: The longest common subsequence is "ace" and its length is 3.

Example 2:
Input: text1 = "abc", text2 = "abc"
Output: 3
Explanation: The longest common subsequence is "abc" and its length is 3.

Example 3:
Input: text1 = "abc", text2 = "def"
Output: 0
Explanation: There is no such common subsequence, so the result is 0.
 
Constraints:
1 <= text1.length, text2.length <= 1000
text1 and text2 consist of only lowercase English characters.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int helper(string s1,string s2,int i,int j){
    if(i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]) return dp[i][j]=1+helper(s1,s2,i-1,j-1);
    else{
        int take=helper(s1,s2,i-1,j);
        int leave=helper(s1,s2,i,j-1);
        return dp[i][j]=max(take,leave);
    }
}
int LongestCommonSubSequence(string s1,string s2){
    int n=s1.size(),m=s2.size();
    dp.resize(n,vector<int>(m+1,-1));
    return helper(s1,s2,n-1,m-1);
}
int main(){
    string s1="abcde",s2="ace";
    cout<<LongestCommonSubSequence(s1,s2);
}