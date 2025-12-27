/*Leetcode 1636 do it again hashmap is used
Given an array of integers nums, sort the array in increasing order based on the frequency of the values. 
If multiple values have the same frequency, sort them in decreasing order.
Return the sorted array.

Example 1:
Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

Example 2:
Input: nums = [2,3,1,3,2]
Output: [1,3,3,2,2]
Explanation: '2' and '3' both have a frequency of 2, so they are sorted in decreasing order.

Example 3:
Input: nums = [-1,1,-6,4,5,-6,1,4,1]
Output: [5,-1,4,4,-6,-6,1,1,1]
 
Constraints:
1 <= nums.length <= 100
-100 <= nums[i] <= 100*/
#include<iostream>
#include<queue>
#include<vector>
#include <unordered_map>
using namespace std;
typedef pair<int,int> pi;
struct cmp{ 
    bool operator()(const pi &a, const pi &b){
        if(a.first==b.first) return a.second<b.second;
        return a.first>b.first;
    }

};
vector<int> frequencySort(vector<int>& nums) {
    int n=nums.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++) mp[nums[i]]++;
    priority_queue<pi,vector<pi>,cmp>hp;
    for(auto x:mp){
        int ele=x.first,freq=x.second;
        pair<int,int>p={freq,ele};
        hp.push(p);
    }
    vector<int>ans;
    while(!hp.empty()){
        int ele=hp.top().second;
        int freq=hp.top().first;
        for(int i=0;i<freq;i++) ans.push_back(ele);
        hp.pop();
    }
    return ans;
}
int main(){
    vector<int>nums={1,1,2,2,2,3};
    vector<int>res=frequencySort(nums);
    for(int x:res)cout<<x<<" ";
    cout<<endl;
}