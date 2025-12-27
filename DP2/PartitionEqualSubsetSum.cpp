/*leetcode 416... revise...
Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both 
subsets is equal or false otherwise.
Example 1:
Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].

Example 2:
Input: nums = [1,2,3,5]
Output: false
Explanation: The array cannot be partitioned into equal sum subsets.
 
Constraints:
1 <= nums.length <= 200
1 <= nums[i] <= 100*/
#include<bits/stdc++.h>
using namespace std;
bool helper(int i,vector<int>&nums,int target,vector<vector<int>>&dp){
    if(target==0) return true;
    if(i==nums.size()) return false;
    if(dp[i][target]!=-1) return dp[i][target];
    if(target<nums[i]) return dp[i][target]=helper(i+1,nums,target,dp);
    int take=helper(i+1,nums,target-nums[i],dp);
    int skip=helper(i+1,nums,target,dp);
    return dp[i][target]=(take || skip);
}
bool canPartition(vector<int>&nums){
    int targetsum=0;
    for(auto ele:nums) targetsum+=ele;
    if(targetsum%2!=0) return false;
    targetsum/=2;
    vector<vector<int>>dp(nums.size(),vector<int>(targetsum+1,-1));
    return helper(0,nums,targetsum,dp);
    
}
int main(){
    vector<int>nums={1,5,11,5};
    cout<<canPartition(nums);
}

