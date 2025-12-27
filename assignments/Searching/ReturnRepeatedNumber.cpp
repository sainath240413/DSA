//leetcode...

/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
 inclusive in sorted order.
 There is only one repeated number in nums, return this repeated number.
 Input 1: arr[] = {1,2,3,3,4}
 Output 1: 3
 Input 2: arr[] = {1,2,2,3,4,5}
 Output 2: 2*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int repeatednumber(vector<int>v){
    /*this uses binary search takes O(logn) time complexity*/
    int n=v.size()-1;
    int lo=1,hi=n;
    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]<=mid) count++;
        } 
        if(count>mid) hi=mid;
        else lo=mid+1;
    }
    return lo;
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of array:";
    for(int i=1;i<=n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    //brute force
    for(int i=1;i<=n;i++){
        if(v[i]==v[i-1]){
            cout<<v[i];
            break;
        }
        /*here we have one important point 
        -->containing n+1 integers where each integer is in the range [1,n] so we can directly compare with 
        indies but then we should start array from index 1
        */
        if(v[i]!=i){
            cout<<v[i];
            break;
        }
        /*but both approaches takes O(n) time in worst case so it can be done using binary search*/
    }
    cout<<repeatednumber(v);
}