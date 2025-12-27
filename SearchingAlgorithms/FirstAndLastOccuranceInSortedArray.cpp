//leetcode...
#include<iostream>
#include<vector>
using namespace std;
void create(vector<int>&v,int choice){
    while(choice){
        int x;
        cout<<"enter data:";
        cin>>x;
        v.push_back(x);
        cout<<"enter choice:";
        cin>>choice;
    }
}
vector<int> firstoccurance(vector<int>v,int x){
    int low=0,high=v.size()-1;
    vector<int>ans{-1,-1};
    while(low<=high){
        int mid=low+(high-low)/2;
        if(x==v[mid]){
            if(mid==0 || v[mid-1]!=x){
                ans[0]=mid;
                break; 
            }
            else high=mid-1; 
        }
        else if(v[mid]>x) high=mid-1;
        else if(v[mid]<x) low=mid+1;
    }
    low=0,high=v.size()-1;
    while(low<=high){
        int mi=low+(high-low)/2;
        if(x==v[mi]){
            if(mi==v.size()-1 || v[mi+1]!=x){
                ans[1]=mi; 
                break;
            }
            else low=mi+1;
        }
        else if(v[mi]>x) high=mi-1;
        else if(v[mi]<x) low=mi+1;
    }
    return ans;
}
int main(){
    vector<int>v;
    int x;
    cout<<"enter x:";
    cin>>x;
    create(v,1);
    vector<int>res=firstoccurance(v,x);
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
}