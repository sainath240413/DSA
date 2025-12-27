#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void create(vector<int>&v,int choice){
    while(choice){
        int n;
        cout<<"enter data:";
        cin>>n;
        v.push_back(n);
        cout<<"enter choice:";
        cin>>choice;
    }
    sort(v.begin(),v.end());
}
int bound(vector<int>v,int low,int high,int target){
    int mid=low+(high-low)/2;
    if(low>high) return low;
    if(v[mid]>=target){
        return bound(v,low,mid-1,target);
    }
    else{
        return bound(v,mid+1,high,target);
    }
}
int main(){
    int target,low,high,mid;
    vector<int>v;
    create(v,1);
    cout<<"enter target:";
    cin>>target;
    low=0,high=v.size()-1;
    int lb=bound(v,low,high,target);
    cout<<lb;
}