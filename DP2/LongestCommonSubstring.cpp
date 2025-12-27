/*GFG revise...
You are given two strings s1 and s2. Your task is to find the length of the longest common substring among the given strings.

Examples:
Input: s1 = "ABCDGH", s2 = "ACDGHR"
Output: 4
Explanation: The longest common substring is "CDGH" with a length of 4.

Input: s1 = "abc", s2 = "acb"
Output: 1
Explanation: The longest common substrings are "a", "b", "c" all having length 1.

Input: s1 = "YZ", s2 = "yz"
Output: 0

Constraints:
1 <= s1.size(), s2.size() <= 103
Both strings may contain upper and lower case alphabets.

Company Tags
Morgan Stanley,Amazon,Microsoft*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int helper(string& s1,string& s2,int i,int j,int& ans){
    if(i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]) {
        dp[i][j]=1+helper(s1,s2,i-1,j-1,ans);
        ans=max(ans,dp[i][j]);
        return dp[i][j];
    }
    else return dp[i][j]=0;
}
int longestCommonSubstr(string& s1, string& s2) {
    int n=s1.size(),m=s2.size(),ans=0;
    dp.resize(n,vector<int>(m,-1));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            helper(s1,s2,i,j,ans);
        }
    }
    return ans;
}
int main(){
    string s1="ABCDGH",s2="ACDGHR";
    cout<<longestCommonSubstr(s1,s2);
}