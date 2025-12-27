/*Leetcode 583...revise...
Given two strings word1 and word2, return the minimum number of steps required to make word1 and word2 the same.
In one step, you can delete exactly one character in either string.
Example 1:
Input: word1 = "sea", word2 = "eat"
Output: 2
Explanation: You need one step to make "sea" to "ea" and another step to make "eat" to "ea".

Example 2:
Input: word1 = "leetcode", word2 = "etco"
Output: 4
 
Constraints:
1 <= word1.length, word2.length <= 500
word1 and word2 consist of only lowercase English letters.*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int helper(string&s1,string& s2,int i,int j){
    if(i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]) return dp[i][j]=1+helper(s1,s2,i-1,j-1);
    else{
        int take1=helper(s1,s2,i-1,j);
        int take2=helper(s1,s2,i,j-1);
        return dp[i][j]=max(take1,take2);
    }
}
int minDistance(string s1, string s2) {
    if(s1==s2) return 0;
    int n=s1.size(),m=s2.size();
    dp.resize(n,vector<int>(m+1,-1));
    int x=helper(s1,s2,n-1,m-1);
    return n+m-2*x;
}
int main(){
    string s1="sea",s2="eat";
    cout<<minDistance(s1,s2);
}