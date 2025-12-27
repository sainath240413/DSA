//leetcode.. revise
#include<iostream>
#include<limits>
using namespace std;
bool check(int mid,int a[],int days,int n){
    int m=mid;
    int count=1;
    for(int i=0;i<n;i++){
        if(m>=a[i]){
            m-=a[i];
        }
        else{
            count++;
            m=mid;
            m-=a[i];
        }
    }
    if(count>days) return false;
    else return true;
}
int main(){
    int a[10],n,days;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"enter days:";
    cin>>days;
    int sum=0;
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]) max=a[i];
        sum+=a[i];
    }
    int lo=max,hi=sum,mincapacity=sum;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(check(mid,a,days,n)){
            mincapacity=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    cout<<mincapacity;
}