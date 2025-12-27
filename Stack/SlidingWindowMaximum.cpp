/*Leetcode 239...revise raghav sir method...
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
#include<vector>
#include<stack>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    //method->1 my way,time limit exceeded...
    // int n=nums.size();
    // vector<int>ans(n-k+1);
    // int i=0,j=k-1;
    // while(j<n){
    //     int maxans=INT_MIN;
    //     for(int l=i;l<=j;l++){
    //         maxans=max(nums[l],maxans);
    //     }
    //     ans[i]=maxans;
    //     i++;
    //     j++;
    // }
    // return ans;

    //method->2 raghav sir way
    if(k==1) return nums;
    int n=nums.size();
    vector<int>ngi(n);//next greater element 
    stack<int>s;
    ngi[n-1]=n;
    s.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(s.size()>0 && nums[i]>=nums[s.top()]) s.pop();
        if(s.size()==0) ngi[i]=n;
        else ngi[i]=s.top();
        s.push(i);
    }

    vector<int>ans;
    int j=0;
    for(int i=0;i<n-k+1;i++){
        if(j<i) j=i;
        int mx=nums[j];
        while(j<i+k){//means if nge is inside window
            mx=nums[j];
            if(ngi[j]>=i+k) break;
            j=ngi[j];
        }
        ans.push_back(mx);
    }
    return ans;
}
void display(vector<int>v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    int n,k;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<"enter window size:";
    cin>>k;
    vector<int>ans=maxSlidingWindow(v,k);
    display(ans);
}