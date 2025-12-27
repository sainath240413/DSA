//revise...
#include<iostream>
#include<vector>
using namespace std;
void increasingsequence(vector<int>&v,vector<int>res,int k,int n,int idx){
    if(res.size()==k){
        for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        cout<<endl;
        return;
    }
    if(idx>=n) return;
    increasingsequence(v,res,k,n,idx+1);
    if(res.empty() || v[idx]>res.back()){
        res.push_back(v[idx]);
        increasingsequence(v,res,k,n,idx+1);
    }
}
int main(){
    int n,k;
    cout<<"enter n:";
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){ 
        v.push_back(i);
    }
    cout<<"enter k:";
    cin>>k;
    increasingsequence(v,{},k,n,0);
}