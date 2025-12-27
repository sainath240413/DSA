/*Leetcode 215...
Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.
Can you solve it without sorting?

Example 1:
Input: nums = [3,2,1,5,6,4], k = 2
Output: 5

Example 2:
Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4

Constraints:
1 <= k <= nums.length <= 105
-104 <= nums[i] <= 104
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int k;
    cout<<"enter k:";
    cin>>k;
    vector<int>v={3,2,1,5,6,4};
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<k<<"th smallest element in array is:"<<pq.top();
}