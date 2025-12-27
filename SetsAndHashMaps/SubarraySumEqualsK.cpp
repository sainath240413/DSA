/*Leetcode 560...Revise...compare with previous subissions in leetcode...
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input: nums = [1,1,1], k = 2
Output: 2

Example 2:
Input: nums = [1,2,3], k = 3
Output: 2
 
Constraints:
1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    if(nums.size()==1 && nums[0]==k) return 1;
    int n=nums.size();
    vector<int>p(n);
    p[0]=nums[0];
    int count=0;
    unordered_map<int,int>m;
    for(int i=1;i<n;i++){
        p[i]=p[i-1]+nums[i];
    }
    for(int i=0;i<n;i++){
        if(p[i]==k) count++;
        if(m.find(p[i]-k)!=m.end()) count+=m[p[i]-k];
        m[p[i]]++;
    }
    return count;
}
int main(){
    vector<int>nums={1,1,1};
    int k=2;
    cout<<subarraySum(nums,k)<<endl; 
}