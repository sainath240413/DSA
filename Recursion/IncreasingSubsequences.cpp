#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void create(int choice,vector<int>&v){
    if(choice==0) return;
    int x;
    cout<<"enter data:";
    cin>>x;
    v.push_back(x);
    cout<<"enter choice:";
    cin>>choice;
    create(choice,v);
}
void subsequence(vector<int>&v,int n,int i,vector<int>res,int k){
    if(i==n){
        if(res.size()==k){
            for(int i=0;i<res.size();i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(res.size()+(n-i)<k) return;
    subsequence(v,n,i+1,res,k);
    res.push_back(v[i]);
    subsequence(v,n,i+1,res,k);
}
void display(vector<int>&v){
    int n=v.size();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int choice,k;
    vector<int>v;
    cout<<"enter choice:";
    cin>>choice;
    create(choice,v);
    // cout<<"elements of the vector are:";
    // display(v);
    int n=v.size();
    vector<int>res;
    cout<<"enter size of subsequence:";
    cin>>k;
    subsequence(v,n,0,res,k);
}