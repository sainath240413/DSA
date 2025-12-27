/*Leetcode 63...revise...
You are given an m x n integer array grid. There is a robot initially located at the top-left corner 
(i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot 
can only move either down or right at any point in time.
An obstacle and space are marked as 1 or 0 respectively in grid. A path that the robot takes cannot include any
square that is an obstacle.
Return the number of possible unique paths that the robot can take to reach the bottom-right corner.
The testcases are generated so that the answer will be less than or equal to 2 * 109.

Example 1:
Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2
Explanation: There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right

Example 2:
Input: obstacleGrid = [[0,1],[0,0]]
Output: 1
 
Constraints:
m == obstacleGrid.length
n == obstacleGrid[i].length
1 <= m, n <= 100
obstacleGrid[i][j] is 0 or 1.*/
#include<iostream>
#include<vector>
using namespace std;
//method 1: recursive memoization
//time complexity: O(2^(n+m)), space complexity: O(n+m)
int helper(vector<vector<int>>a,vector<vector<int>>&dp,int i,int j){
    if(i==a.size()-1 && j==a[0].size()-1) return 1;
    if(i>=a.size() || j>=a[0].size() || a[i][j]==1 || i==0 || j==0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=helper(a,dp,i+1,j)+helper(a,dp,i,j+1);
}
int uniquePathsWithObstacles(vector<vector<int>>& a) {
    int n=a.size(),m=a[0].size();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    if(a[n-1][m-1]==1) return 0;
    return helper(a,dp,0,0);
}
//method 2: tabulation
//time complexity: O(n*m), space complexity: O(n*m)
int n,m;
int helper(vector<vector<int>>a,vector<vector<long long>>&dp){
    dp[n-1][m-1]=1;
    for(int i=n-2;i>=0;i--) {
        if(a[i][m-1]==1) dp[i][m-1]=0;
        else dp[i][m-1]=dp[i+1][m-1];
    }
    for(int i=m-2;i>=0;i--){
        if(a[n-1][i]==1) dp[n-1][i]=0;
        else dp[n-1][i]=dp[n-1][i+1];
    } 
    for(int i=n-2;i>=0;i--){
        for(int j=m-2;j>=0;j--){
            if(a[i][j]==1) dp[i][j]=0;
            else dp[i][j]=dp[i+1][j]+dp[i][j+1];
        }
    }
    return dp[0][0];
}
int uniquePathsWithObstacles(vector<vector<int>>& a) {
    n=a.size(),m=a[0].size();
    if(a[0][0]==1 || a[n-1][m-1]==1) return 0;
    vector<vector<long long>>dp(n,vector<long long>(m,0));
    return helper(a,dp);
}
int main(){
    vector<vector<int>>a={{0,0,0},{0,1,0},{0,0,0}};
    cout<<uniquePathsWithObstacles(a);
}