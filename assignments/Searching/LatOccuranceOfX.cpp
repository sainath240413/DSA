#include<iostream>
#include<vector>
using namespace std;
int lastoccurance(vector<int>v,int x){
    int n=v.size();
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==x) {
            if(v[mid+1]!=x){
                return mid;
            }
            else lo=mid+1;
        }
        if(v[mid]>x) hi=mid-1;
        else if(v[mid]<x) lo=mid+1; 
    }
    return -1;
}
int main(){
    int n,x;
    cout<<"enter n:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of vector:";
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<"enter target:";
    cin>>x;
    cout<<lastoccurance(v,x);
}