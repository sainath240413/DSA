/*Leetcode 1312...revise...
Given a string s. In one step you can insert any character at any index of the string.
Return the minimum number of steps to make s palindrome.
A Palindrome String is one that reads the same backward as well as forward.

Example 1:
Input: s = "zzazz"
Output: 0
Explanation: The string "zzazz" is already palindrome we do not need any insertions.

Example 2:
Input: s = "mbadm"
Output: 2
Explanation: String can be "mbdadbm" or "mdbabdm".

Example 3:
Input: s = "leetcode"
Output: 5
Explanation: Inserting 5 characters the string becomes "leetcodocteel".
 
Constraints:
1 <= s.length <= 500
s consists of lowercase English letters.*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int helper(string& s1,string& s2,int i,int j){
    if(j<0 || i<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]) return dp[i][j]=1+helper(s1,s2,i-1,j-1);
    else{
        int take=helper(s1,s2,i-1,j);
        int leave=helper(s1,s2,i,j-1);
        return dp[i][j]=max(take,leave);
    }
}
int minInsertions(string s) {
    int n=s.size();
    string str=s;
    reverse(str.begin(),str.end());
    dp.resize(n,vector<int>(n+1,-1));
    int x=helper(s,str,n-1,n-1);
    return n-x;
}
int main(){
    string s="leetcode";
    cout<<minInsertions(s);
}