//leetcode..
#include<iostream>
#include<vector>
using namespace std;
void combinationsum2(vector<int>ans,int a[],int n,int target,int idx){
    if(target==0){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<n;i++){
        if (i>idx && a[i]==a[i-1]) continue;
        ans.push_back(a[i]);
        combinationsum2(ans,a,n,target-a[i],i);
        ans.pop_back();
    }
}
int main(){
    int n,a[10],target;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>res;
    cout<<"enter target:";
    cin>>target;
    combinationsum2(res,a,n,target,0);
}