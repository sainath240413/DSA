/*Leetcode 213...revise...
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money 
stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the 
last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the 
police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money 
you can rob tonight without alerting the police.

Example 1:
Input: nums = [2,3,2]
Output: 3
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.

Example 2:
Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.

Example 3:
Input: nums = [1,2,3]
Output: 3
 
Constraints:
1 <= nums.length <= 100
0 <= nums[i] <= 1000*/
#include<iostream>
#include<vector>
using namespace std;
//method 1: recursive memorization
//time complexity: O(2^n), space complexity: O(n)
vector<int>dp;
int helper(vector<int>v,int i,int end,vector<int>&dp){
    if(i>end) return 0;
    if(i==end) return v[i];
    if(dp[i]!=-1) return dp[i];
    return dp[i]=max(v[i]+helper(v,i+2,end,dp),0+helper(v,i+1,end,dp));
}
int rob(vector<int>& nums) {
    int n=nums.size();
    dp.resize(nums.size()+1,-1);
    if(n==1) return nums[0];
    if(n==2) return max(nums[0],nums[1]);
    int max1=helper(nums,0,n-2,dp);
    vector<int>dp2(n,-1);
    int max2=helper(nums,1,n-1,dp2);
    return max(max1,max2);
}
//method 2: tabulation
//time complexity: O(n), space complexity: O(n)
int rob2(vector<int>& nums) {
    int n=nums.size();
    if(n==1) return nums[0];
    //int dp[n];
    dp[0]=nums[0];
    if(n!=1) dp[1]=max(nums[0],nums[1]);
    for(int i=2;i<n-1;i++){
        dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
    }
    int max1=dp[n-2];
    dp[1]=nums[1];
    if(n!=2) dp[2]=max(nums[1],nums[2]);
    for(int i=3;i<n;i++){
        dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
    }
    int max2=dp[n-1];
    return max(max1,max2);
}
int main(){
    vector<int>nums={2,3,2};
    cout<<rob(nums);
}