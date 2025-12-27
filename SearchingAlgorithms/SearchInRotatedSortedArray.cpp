//leetcode...
#include<iostream>
using namespace std;
int main(){
    int a[10],n,target;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"enter target:";
    cin>>target;
    int lo=0,hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(a[mid]==target){
            flag=true;
            cout<<mid;
            break;
        }
        if(a[lo]<=a[mid]){
            if(a[lo]<=target && target<a[mid]) 
                hi=mid-1;
            else lo=mid+1;
        }
        else{
            if(a[mid]<target && target<=a[hi])
                lo=mid+1;
            else hi=mid-1;
        }
    }
    if(flag==false) cout<<-1;
}