/*Given an array of integers nums and an integer k, return the number of contiguous subarrays where the
product of all the elements in the subarray is strictly less than k.

Example 1:
Input: nums = [10,5,2,6], k = 100
Output: 8
Explanation: The 8 subarrays that have product less than 100 are:
[10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.

Example 2:
Input: nums = [1,2,3], k = 0
Output: 0*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int numSubarrayProductLessThanK(vector<int>&v,int k){
    int n=v.size();
    int i=0,j=0,count=0,product=1;
    if(k<=1) return 0;
    while(j<n){
        product*=v[j];
        while(product>=k){
            count+=(j-i);
            product/=v[i];
            i++;
        }
        j++;
    }
    while(i<n){
        count+=(j-i);
        product/=v[i];
        i++;
    }
    return count;
}
int main(){
    int n,k;
    cout<<"enter size of vector:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of vector:";
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<"enter k:";
    cin>>k;
    cout<<numSubarrayProductLessThanK(v,k);
}