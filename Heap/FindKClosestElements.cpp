/*Leetcode 658... revise...
Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. 
The result should also be sorted in ascending order.
An integer a is closer to x than an integer b if:
|a - x| < |b - x|, or
|a - x| == |b - x| and a < b
 
Example 1:
Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]

Example 2:
Input: arr = [1,1,2,3,4,5], k = 4, x = -1
Output: [1,1,2,3]

Constraints:
1 <= k <= arr.length
1 <= arr.length <= 104
arr is sorted in ascending order.
-104 <= arr[i], x <= 104
*/
#include<iostream>
#include<queue>
#include<vector>
#include <unordered_map>
#include<algorithm>
using namespace std;
typedef pair<int,int> p;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n=arr.size();
    priority_queue<p>hp;
    for(int i=0;i<n;i++){
        int distance=abs(x-arr[i]);
        hp.push({distance,arr[i]});
        if(hp.size()>k) hp.pop();
    }
    vector<int>ans;
    for(int i=0;i<k;i++){
        int ele=hp.top().second;
        ans.push_back(ele);
        hp.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int k=4,x=3;
    vector<int>res=findClosestElements(arr,k,x);
    for(int v:res)cout<<v<<" ";
    cout<<endl;
}