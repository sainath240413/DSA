/*Leetcode 1814... revise...
You are given an array nums that consists of non-negative integers. Let us define rev(x) as the reverse of the 
non-negative integer x. For example, rev(123) = 321, and rev(120) = 21. A pair of indices (i, j) is nice if it 
satisfies all of the following conditions:
0 <= i < j < nums.length
nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
Return the number of nice pairs of indices. Since that number can be too large, return it modulo 109 + 7.

Example 1:
Input: nums = [42,11,1,97]
Output: 2
Explanation: The two pairs are:
- (0,3) : 42 + rev(97) = 42 + 79 = 121, 97 + rev(42) = 97 + 24 = 121.
- (1,2) : 11 + rev(1) = 11 + 1 = 12, 1 + rev(11) = 1 + 11 = 12.

Example 2:
Input: nums = [13,10,35,24,76]
Output: 4

Constraints:
1 <= nums.length <= 105
0 <= nums[i] <= 109*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
//method->1 O(n^2)
int rev(int a){
    int x=0;
    while(a>0){
        x=x*10;
        x+=a%10;
        a=a/10;
    }
    return x;
}
int countNicePairs1(vector<int>& nums) {
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+rev(nums[j])==rev(nums[i])+nums[j]){
                count++;
            }
        }
    }
    return count;
}
//method->2 using unordered map
int countNicePairs2(vector<int>& nums) {
    int n=nums.size();
    int count=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        nums[i]=nums[i]-rev(nums[i]);
    }
    for(int i=0;i<n;i++){
        m[nums[i]]++;
    }
    for(auto ele:m){
        int f=ele.second;
        count+=f*(f-1)/2;
    }
    return count;
}
//method->3 
int countNicePairs3(vector<int>& nums) {
    int n=nums.size();
    int count=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        nums[i]=nums[i]-rev(nums[i]);
    }
    for(int i=0;i<n;i++){
        if(m.find(nums[i])!=m.end()){
            count=count%1000000007;
            count+=m[nums[i]];
        }
        m[nums[i]]++;
    }
    return count%1000000007;
}
int main(){
    vector<int>nums={42,11,1,97};
    cout<<countNicePairs3(nums)<<endl;
}