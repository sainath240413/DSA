#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool bounds(vector<int>&v,int target){
    int lo=0,hi=1;
    while(v[hi]<target && hi<v.size()){
        lo=hi;
        hi=hi*2;
    }
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==target) return true;
        else if(v[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    return false;
}
int main(){
    int n,target;
    cout<<"enetr size of infinite array:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    cout<<"enter target:";
    cin>>target;
    cout<<bounds(v,target);
}