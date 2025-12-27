//leetcode....
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void create(vector<int>&v,int choice){
    while(choice){
        int x;
        cout<<"enter element:";
        cin>>x;
        v.push_back(x);
        cout<<"enter choice:";
        cin>>choice;
    }
}
void display(vector<vector<int>>&res){
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
void combination_sum(vector<int>ans,vector<int>v,int n,int target,int idx){
    if(target==0){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<n;i++){
        ans.push_back(v[i]);
        combination_sum(ans,v,n,target-v[i],i);
        ans.pop_back();
    }
}
int main(){
    vector<int>v;
    int choice;
    cout<<"enter choice:";
    cin>>choice;
    create(v,choice);
    int target;
    cout<<"enter taret:";
    cin>>target;
    vector<int>ans;
    combination_sum(ans,v,v.size(),target,0);
}