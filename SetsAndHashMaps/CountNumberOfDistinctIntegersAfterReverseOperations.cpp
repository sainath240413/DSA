/*Leetcode 2442
You are given an array nums consisting of positive integers.
You have to take each integer in the array, reverse its digits, and add it to the end of the array. You should 
apply this operation to the original integers in nums.
Return the number of distinct integers in the final array.

Example 1:
Input: nums = [1,13,10,12,31]
Output: 6
Explanation: After including the reverse of each number, the resulting array is [1,13,10,12,31,1,31,1,21,13].
The reversed integers that were added to the end of the array are underlined. Note that for the integer 10, 
after reversing it, it becomes 01 which is just 1.
The number of distinct integers in this array is 6 (The numbers 1, 10, 12, 13, 21, and 31).

Example 2:
Input: nums = [2,2,2]
Output: 1
Explanation: After including the reverse of each number, the resulting array is [2,2,2,2,2,2].
The number of distinct integers in this array is 1 (The number 2).

Constraints:
1 <= nums.length <= 105
1 <= nums[i] <= 106*/
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int rev(int n){
    int r=0;
    while(n>0){
        r=r*10;
        r+=n%10;
        n=n/10;
    }
    return r;
}
int countDistinctIntegers(vector<int>& nums) {
    int n=nums.size();
    for(int i=0;i<n;i++){
        nums.push_back(rev(nums[i]));
    }
    unordered_set<int>s;
    for(int i=0;i<nums.size();i++) s.insert(nums[i]);
    return s.size();
}
int main(){
    vector<int>a={1,13,10,12,31};
    cout<<countDistinctIntegers(a)<<endl; //Output: 6
}