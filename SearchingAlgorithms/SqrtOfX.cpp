#include<iostream>
using namespace std;
int sqrt(int n){
    if(n==1) return n;
    int lo=1,high=n;
    while(lo<=high){
        int mid=lo+(high-lo)/2;
        if(mid==n/mid) return mid;
        if(mid>n/mid){
            high=mid-1;
        }
        else lo=mid+1;
    }
    return high;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<sqrt(n);
}