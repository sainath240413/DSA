#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int count(vector<int>v){
    int n=v.size();
    int hi=n-1,lo=0;
    sort(v.begin(),v.end());
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[n-1]!=1) return -1;
        if(v[lo]==1) return hi-lo+1;
        if(v[mid]!=1) lo=mid+1;
        else if(v[mid]==1 && v[mid-1]==0) {
            lo=mid;
            return hi-lo+1;
        }
    }
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of vector:";
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<count(v);
}