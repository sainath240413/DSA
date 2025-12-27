/*Leetcode 632... do it again not understood...
You have k lists of sorted integers in non-decreasing order. Find the smallest range that includes at least 
one number from each of the k lists.
We define the range [a, b] is smaller than range [c, d] if b - a < d - c or a < c if b - a == d - c.

Example 1:
Input: nums = [[4,10,15,24,26],[0,9,12,20],[5,18,22,30]]
Output: [20,24]
Explanation: 
List 1: [4, 10, 15, 24,26], 24 is in range [20,24].
List 2: [0, 9, 12, 20], 20 is in range [20,24].
List 3: [5, 18, 22, 30], 22 is in range [20,24].

Example 2:
Input: nums = [[1,2,3],[1,2,3],[1,2,3]]
Output: [1,1]
 
Constraints:
nums.length == k
1 <= k <= 3500
1 <= nums[i].length <= 50
-105 <= nums[i][j] <= 105
nums[i] is sorted in non-decreasing order.
*/
#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
typedef pair<int,pair<int,int>>pip;
vector<int> smallestRange(vector<vector<int>>& nums) {
    priority_queue<pip,vector<pip>,greater<pip>>pq;
    int mx=INT_MIN;
    for(int i=0;i<nums.size();i++){
        mx=max(nums[i][0],mx);
        pq.push({nums[i][0],{i,0}});
    }
    int mn=pq.top().first;
    int st=mn,end=mx;
    while(true){
        int row=pq.top().second.first;
        int col=pq.top().second.second;
        pq.pop();
        if(col==nums[row].size()-1) break;
        pq.push({nums[row][col+1],{row,col+1}});
        mx=max(nums[row][col+1],mx);
        mn=pq.top().first;
        if(mx-mn < end-st){
            end=mx;
            st=mn;
        }
    }
    return {st,end};
}
int main(){
    vector<vector<int>>nums={{4,10,15,24,26},{0,9,12,20},{5,18,22,30}};
    vector<int>ans=smallestRange(nums);
    cout<<"Smallest range covering elements from k lists: ["<<ans[0]<<","<<ans[1]<<"]"<<endl;
}