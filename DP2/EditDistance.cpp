/*Leetcode 72...revise...
Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.
You have the following three operations permitted on a word:
Insert a character
Delete a character
Replace a character
 
Example 1:
Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: 
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')

Example 2:
Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation: 
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')
 
Constraints:
0 <= word1.length, word2.length <= 500
word1 and word2 consist of lowercase English letters.*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int helper(string& s1,string& s2,int i,int j){
    if(i<0) return j+1;
    if(j<0) return i+1;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]) return dp[i][j]=helper(s1,s2,i-1,j-1);
    else{
        int add=1+helper(s1,s2,i-1,j);
        int remove=1+helper(s1,s2,i,j-1);
        int replace=1+helper(s1,s2,i-1,j-1);
        return dp[i][j]=min(add,min(remove,replace));
    }
}
int minDistance(string s1,string s2){
    int n=s1.size(),m=s2.size();
    dp.resize(n,vector<int>(m+1,-1));
    if(s1=="") return m;
    if(s2=="") return n;
    return helper(s1,s2,n-1,m-1);
}
int main(){
    string s1="intention",s2="execution";
    cout<<minDistance(s1,s2);
}