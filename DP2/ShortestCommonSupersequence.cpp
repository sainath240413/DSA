/*Leetcode 1092...revise...do it again...
Given two strings str1 and str2, return the shortest string that has both str1 and str2 as subsequences. If there are multiple 
valid strings, return any of them.
A string s is a subsequence of string t if deleting some number of characters from t (possibly 0) results in the string s.

Example 1:
Input: str1 = "abac", str2 = "cab"
Output: "cabac"
Explanation: 
str1 = "abac" is a subsequence of "cabac" because we can delete the first "c".
str2 = "cab" is a subsequence of "cabac" because we can delete the last "ac".
The answer provided is the shortest such string that satisfies these properties.

Example 2:
Input: str1 = "aaaaaaaa", str2 = "aaaaaaaa"
Output: "aaaaaaaa"
 
Constraints:
1 <= str1.length, str2.length <= 1000
str1 and str2 consist of lowercase English letters.*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int helper(string& s1,string& s2,int i,int j){
    if(i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]) return dp[i][j]=1+helper(s1,s2,i-1,j-1);
    else{
        int take1=helper(s1,s2,i-1,j);
        int take2=helper(s1,s2,i,j-1);
        return dp[i][j]=max(take1,take2);
    }
}
string shortestCommonSupersequence(string s1, string s2) {
    int n=s1.size(),m=s2.size();
    dp.resize(n,vector<int>(m,-1));
    helper(s1,s2,n-1,m-1);
    //find lcs string
    string lcs="";
    int i=n-1,j=m-1;
    while(i>=0 && j>=0){
        if(s1[i]==s2[j]){
            lcs.push_back(s1[i]);
            i--;j--;
        }
        else{
            if(i>0 && dp[i][j]==dp[i-1][j]) i--;
            else j--;
        }
    }
    reverse(lcs.begin(),lcs.end());
    string ans="";
    i=0,j=0;
    for(int k=0;k<lcs.size();k++){
        while(s1[i]!=lcs[k]){
            ans.push_back(s1[i++]);
        }
        i++;
        while(s2[j]!=lcs[k]){
            ans.push_back(s2[j++]);
        }
        j++;
        ans.push_back(lcs[k]);
    }
    while(i<n){
        ans.push_back(s1[i++]);
    }
    while(j<m){
        ans.push_back(s2[j++]);
    }
    return ans;
}
int main(){
    string s1="abac",s2="cab";
    cout<<shortestCommonSupersequence(s1,s2);
}