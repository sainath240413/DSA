//leetcode...
/*Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n/2⌋ times. 
You may assume that the majority element always exists in the array*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>a(10);
    int n=a.size();
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    cout<<a[n/2];
}