/*Leetcode 62... revise...
There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). 
The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either 
down or right at any point in time.
Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the
bottom-right corner.
The test cases are generated so that the answer will be less than or equal to 2 * 109.

Example 1:
Input: m = 3, n = 7
Output: 28

Example 2:
Input: m = 3, n = 2
Output: 3
Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Down -> Down
2. Down -> Down -> Right
3. Down -> Right -> Down

Constraints:
1 <= m, n <= 100*/
#include<iostream>
#include<vector>
using namespace std;
//method 1: recursive time limit exceeded same like maze path problem in recursion
//time complexity: O(2^(m+n)), space complexity: O(m+n)
int helper(int s1,int s2,int e1,int e2){
    if(s1>e1 || s2>e2) return 0;
    if(s1==e1 || s2==e2) return 1;
    int right=helper(s1,s2+1,e1,e2);
    int down=helper(s1+1,s2,e1,e2);
    return right+down;
}
int uniquePaths(int m, int n) {
    return helper(0,0,m-1,n-1);
}
int uniquePaths(int m, int n) {//using 2 variables reverse recursion
    if(m==0 && n==0) return 0;
    if(m==1 || n==1) return 1;
    return uniquePaths(m-1,n)+uniquePaths(m,n-1);
}
//method 2: memoization
//time complexity: O(m*n), space complexity: O(m*n)
int helper(int s1,int s2,int e1,int e2,vector<vector<int>>&dp){
    if(s1>e1 || s2>e2) return 0;
    if(s1==e1 || s2==e2) return 1;
    if(dp[s1][s2]!=-1) return dp[s1][s2];
    return dp[s1][s2]=helper(s1,s2+1,e1,e2,dp)+helper(s1+1,s2,e1,e2,dp);
}
int uniquePaths(int m, int n) {
    vector<vector<int>>dp(m,vector<int>(n,-1));
    return helper(0,0,m-1,n-1,dp);
}
//method 3: tabulation
//time complexity: O(m*n), space complexity: O(m*n)
int uniquePaths(int m, int n) {
    vector<vector<int>>dp(m,vector<int>(n,-1));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0) dp[i][j]=1;
            else dp[i][j]=dp[i][j-1]+dp[i-1][j];
        }
    }
    return dp[m-1][n-1];
}
int main(){
    int m,n;
    cout<<"enter m and n:";
    cin>>m>>n;
    cout<<uniquePaths(m,n);
}