/*leetcode revise...*/
/*Given a binary array nums, you should delete one element from it.
Return the size of the longest non-empty subarray containing only 1's in the resulting
array. Return 0 if there is no such subarray.

Example 1:
Input: nums = [1,1,0,1]
Output: 3
Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with 
value of 1's.

Example 2:
Input: nums = [0,1,1,1,0,1,1,0,1]
Output: 5
Explanation:After deleting the number in position 4,[0,1,1,1,1,1,0,1] longest subarray
with value of 1's is [1,1,1,1,1].

Example 3:
Input: nums = [1,1,1]
Output: 2
Explanation: You must delete one element.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int longestSubarray(vector<int>&v){
    //method->1
    // int n=v.size(),i=0,j=0,flips=0;
    // int maxlen=0,k=1,len=0;
    // while(j<n){
    //     if(v[j]==1) j++;
    //     else{
    //         if(flips<k){
    //             flips++;
    //             j++;
    //         }
    //         else{
    //             len=j-i;
    //             maxlen=max(maxlen,len);
    //             while(v[i]==1) i++;
    //             i++;
    //             j++;
    //         }
    //     }
    //     len=j-i;
    //     maxlen=max(maxlen,len);
    // }
    // return maxlen-1;

    //method->2
    int n=v.size(),i=0,j=0,maxlen=0;
    int count=0,zeropos=-1;
    while(j<n){
        int prev=zeropos;
        if(v[j]==0){
            count++;
            zeropos=j;
        }
        if(count<=1) j++;
        else{
            maxlen=max(maxlen,j-i);
            i=prev+1;
            count--;
            j++;
        }
    }
    maxlen=max(maxlen,j-i);
    return maxlen-1;
}
int main(){
    int n;
    cout<<"size of vector:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of vector:";
    for(int i=0;i<v.size();i++) cin>>v[i];
    cout<<longestSubarray(v);
}