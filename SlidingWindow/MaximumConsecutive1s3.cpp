/*leetcode revise..*/
/*Given a binary array nums and an integer k, return the maximum number of consecutive
1's in the array if you can flip at most k 0's.

Example 1:
Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

Example 2:
Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int longestones(vector<int>&v,int k){
    int n=v.size(),i=0,j=0,flips=0;
    int len=INT_MIN;
    int maxlen=0;
    while(j<n){
        if(v[j]==1) j++;
        else{
            if(flips<k){
                flips++;
                j++;
            }
            else{
                len=j-i;
                maxlen=max(len,maxlen);
                while(v[i]==1) i++;
                i++;
                j++;
            }
        }
        len=j-i;
        maxlen=max(len,maxlen);
    }
    return maxlen;
}
int main(){
    vector<int>v(10);
    cout<<"enter binary data in vector:";
    for(int i=0;i<v.size();i++) cin>>v[i];
    int k;
    cout<<"enter k(how many zeros can be fillped):";
    cin>>k;
    cout<<longestones(v,k);
}