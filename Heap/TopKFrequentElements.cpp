/*Leetcode 347 do it again it has concepts of hashmap....
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer 
in any order.

Example 1:
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

Example 2:
Input: nums = [1], k = 1
Output: [1]
 
Constraints:
1 <= nums.length <= 105
-104 <= nums[i] <= 104
k is in the range [1, the number of unique elements in the array].
It is guaranteed that the answer is unique.

Follow up: Your algorithm's time complexity must be better than O(n log n), where n is the array's size.*/
#include<iostream>
#include<queue>
#include<vector>
#include <unordered_map>
using namespace std;
typedef pair<int,int> pi;
vector<int> topKFrequent(vector<int>& nums, int k) {
    int n=nums.size();
    unordered_map<int,int>mp;
    //map pair {ele,freq}
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    //hp pair {freq,ele}
    priority_queue<pi,vector<pi>,greater<pi>>hp;
    for(auto x:mp){
        int ele=x.first,freq=x.second;
        pair<int,int>p={freq,ele};
        hp.push(p);
        if(hp.size()>k) hp.pop();
    }
    vector<int>ans;
    while(!hp.empty()){
        int ele=hp.top().second;
        ans.push_back(ele);
        hp.pop();
    }
    return ans;
}
int main(){
    vector<int>nums={1,1,1,2,2,3};
    int k=2;
    vector<int>res=topKFrequent(nums,k);
    for(int x:res)cout<<x<<" ";
    cout<<endl;
}