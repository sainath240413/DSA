//leetcode..revise..
#include<iostream>
#include<vector>
using namespace std;
vector<int> disappearednumbers(int a[],int n,vector<int>v) {
    int i=0;
    while(i<n){
        int correctidx=a[i]-1;
        if(a[correctidx]==a[i]) i++;
        else swap(a[correctidx],a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]!=i+1) v.push_back(i+1);
    }
    return v;
}
int main(){
    int a[]={1,1,2,3,4,5,3};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v=disappearednumbers(a,n,v);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}