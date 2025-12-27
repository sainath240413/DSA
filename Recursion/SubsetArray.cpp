//leetcode..
#include<iostream>
#include<vector>
using namespace std;
void subset(int a[],int n,int i,vector<int>res){
    if(i==n){
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(a,n,i+1,res);
    res.push_back(a[i]);
    subset(a,n,i+1,res);
}
int main(){
    int a[10],n;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>res;
    subset(a,n,0,res);
}