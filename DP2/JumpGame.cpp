/*Leetcode 55... revise...
You are given an integer array nums. You are initially positioned at the array's first index, and each element 
in the array represents your maximum jump length at that position.
Return true if you can reach the last index, or false otherwise.

Example 1:
Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

Example 2:
Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it 
impossible to reach the last index.

Constraints:
1 <= nums.length <= 104
0 <= nums[i] <= 105*/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool canJump(vector<int>& nums) {
    int n=nums.size();
    //method->1 works only for 151 test cases
    // int i=0;
    // while(i<n){
    //     if(i==n-1) return true;
    //     if(nums[i]==0) return false;
    //     i+=nums[i];
    // }
    // return true;.

    //method->2
    int far=0;
    for(int i=0;i<n;i++){
        if(i>far) return false;
        far=max(far,i+nums[i]);
    }
    return true;
}
//method->3 usoing DP
vector<int>dp;
bool helper(int idx,vector<int>&a){
    if(idx>=a.size()-1) return true;
    if(dp[idx]!=-1) return dp[idx];
    if(a[idx]>=a.size()-1-idx) return true;
    bool ans=false;
    for(int i=1;i<=a[idx];i++){
        ans=(ans || helper(idx+i,a));
        if(ans) break; 
    }
    return dp[idx]=ans;
}
bool canJump1(vector<int>& nums) {
    dp.resize(nums.size(),-1);
    return helper(0,nums);
}
int main(){
    vector<int>nums={2,3,1,1,4};
    cout<<canJump(nums);
}