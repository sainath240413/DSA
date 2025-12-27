//leetcode...
#include<iostream>
using namespace std;
int main(){
    int a[10],n;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++) cin>>a[i];
    int lo=0,hi=n-1;
    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(a[mid]<a[mid+1]){
            lo=mid+1;
        } else{
            hi=mid;
        }
    }
    cout<<lo;
}