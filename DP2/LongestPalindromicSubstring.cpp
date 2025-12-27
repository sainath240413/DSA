/*Lettcode 5...revise...
Given a string s, return the longest palindromic substring in s.
Example 1:
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

Example 2:
Input: s = "cbbd"
Output: "bb"
 
Constraints:
1 <= s.length <= 1000
s consist of only digits and English letters.*/
#include<bits/stdc++.h>
using namespace std;
//method->1 dp->memorization time limit exceeded
vector<vector<int>>dp;
bool isPalindrome(int i,int j,string &s){
    if(i>=j) return true;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==s[j] && isPalindrome(i+1,j-1,s)){
        return dp[i][j]=1;
    }
    return dp[i][j]=0;
}
string helper(string &s,int i,int j,string &ans,int anslen){
    if(i>j) return ans;
    if(isPalindrome(i,j,s)){
        int len=j-i+1;
        if(anslen<len){
            ans=s.substr(i,len);
            anslen=len;
        }
    }
    string right=helper(s,i+1,j,ans,anslen);
    string left=helper(s,i,j-1,ans,anslen);
    if(right.size()>left.size()) return right;
    else return left;
}
string longestPalindrome(string s){
    int n=s.size(),anslen=0;
    string ans="";
    dp.resize(n,vector<int>(n,-1));
    return helper(s,0,n-1,ans,anslen);
}
//method->2 dp->tabulation
string longestPalindrome(string s){
    int n=s.size(),anslen=0;
    string ans="";
    dp.resize(n,vector<int>(n,-1));
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(isPalindrome(i,j,s)){
                int len=j-i+1;
                if(anslen<len){
                    ans=s.substr(i,len);
                    anslen=len;
                }
            }
        }
    }
    return ans;
}
int main(){
    string s="babad";
    cout<<longestPalindrome(s);
}