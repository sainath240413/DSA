/*leetcode 239...revise...
You are given an array of integers nums, there is a sliding window of size k which is moving from the very left
of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves
right by one position.
Return the max sliding window.

Example 1:
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation: 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
1 [3  -1  -3] 5  3  6  7       3
1  3 [-1  -3  5] 3  6  7       5
1  3  -1 [-3  5  3] 6  7       5
1  3  -1  -3 [5  3  6] 7       6
1  3  -1  -3  5 [3  6  7]      7

Example 2:
Input: nums = [1], k = 1
Output: [1]
 
Constraints:
1 <= nums.length <= 105
-104 <= nums[i] <= 104
1 <= k <= nums.length
*/
#include<iostream>
#include<deque>
#include<queue>
#include<vector>
using namespace std;
void SlidingWindowMaximum(int a[],int n,int k,deque<int>&dq,vector<int>&ans){
    if(k==1) return;
    for(int i=0;i<n;i++){
        int j=i-k+1;
        while(!dq.empty() && a[i]>a[dq.back()]) dq.pop_back();
        dq.push_back(i);
        while(dq.front()<j) dq.pop_front();
        if(i>=k-1) ans.push_back(a[dq.front()]);
    }
}
void display(vector<int>v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    int a[10]={1,3,-1,-3,5,3,6,7};
    int k=3;
    deque<int>dq;
    vector<int>ans;
    SlidingWindowMaximum(a,8,k,dq,ans);
    display(ans);
}