//leetcode... do it again
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[10],n,k,target;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"enter target:";
    cin>>target;
    cout<<"enter no of closest elements:";
    cin>>k;
    int lo=0,hi=n-k;
    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(target-a[mid]>a[mid+k]-target) lo=mid+1;
        else hi=mid;
    }
    vector<int>v;
    for(int i=lo;i<lo+k;i++){
        v.push_back(a[i]);
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}