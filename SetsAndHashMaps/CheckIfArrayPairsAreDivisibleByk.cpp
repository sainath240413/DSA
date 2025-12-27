/*Leetcode 1497... revise...
Given an array of integers arr of even length n and an integer k.
We want to divide the array into exactly n / 2 pairs such that the sum of each pair is divisible by k.
Return true If you can find a way to do that or false otherwise.

Example 1:
Input: arr = [1,2,3,4,5,10,6,7,8,9], k = 5
Output: true
Explanation: Pairs are (1,9),(2,8),(3,7),(4,6) and (5,10).

Example 2:
Input: arr = [1,2,3,4,5,6], k = 7
Output: true
Explanation: Pairs are (1,6),(2,5) and(3,4).

Example 3:
Input: arr = [1,2,3,4,5,6], k = 10
Output: false
Explanation: You can try all possible pairs to see that there is no way to divide arr into 3 pairs each with
sum divisible by 10.

Constraints:
arr.length == n
1 <= n <= 105
n is even.
-109 <= arr[i] <= 109
1 <= k <= 105
*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
bool canArrange(vector<int>& arr, int k) {
    unordered_map<int,int>m;
    for(auto ele:arr){
        ele=((ele%k)+k)%k;
        m[ele]++;
    }
    if(m.find(0)!=m.end()){
        if(m[0]%2!=0) return false;
        m.erase(0);
    }
    for(auto x:m){
        int ele=x.first;
        int rem=k-ele;
        if(m.find(rem)==m.end()) return false;
        if(m[rem]!=m[ele]) return false;
    }
    return true;
}
int main(){
    vector<int>arr={1,2,3,4,5,10,6,7,8,9};
    int k=5;
    cout<<boolalpha<<canArrange(arr,k)<<endl; 
}