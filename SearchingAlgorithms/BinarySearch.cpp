#include<iostream>
using namespace std;
int binarysearch(int a[],int target,int n){
    //using loops
    int low=0,high=n-1;
    for(int i=low;low<=high;i++){
        int mid=low+(high-low)/2;
        if(target==a[mid]) return mid;
        else if(target<a[mid]){
            high=mid-1;
        }
        else if(target>a[mid]){
            low=mid+1;
        }
    }
    cout<<"element not found";
    return -1;
}
bool binarysearch(int a[],int target,int low,int high,int mid){
    if(low>high) return false;
    if(a[mid]==target) return true;
    if(a[mid]>target){
        high=mid-1;
        return binarysearch(a,target,low,high,low+(high-low)/2);
    }
    if(a[mid]<target){
        low=mid+1;
        return binarysearch(a,target,low,high,low+(high-low)/2);
    }
    return false;
}
int main(){
    int a[10],n,target;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"enter target:";
    cin>>target;
    int idx=binarysearch(a,target,n);
    if(idx!=-1) cout<<"element found at index "<<idx;
}