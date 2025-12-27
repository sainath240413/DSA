#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool binarysearch(vector<int>&v,int target){
    int n=v.size();
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==target) return true;
        else if(v[mid]>target) lo=mid+1;
        else hi=mid-1;
    }
    return false;
}
int main(){
    int n,target;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<"enter target:";
    cin>>target;
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<endl<<binarysearch(v,target);
}