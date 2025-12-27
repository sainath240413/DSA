#include<iostream>
#include<vector>
using namespace std;
void mergesortedarray(vector<int>&a,vector<int>&b,vector<int>&v){
    int k=0,i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) v[k++]=a[i++];
        else v[k++]=b[j++];
    }
    if(i==a.size()){
        while(j<b.size()) v[k++]=b[j++];
    }
    if(j==b.size()){
        while(i<a.size()) v[k++]=a[i++];
    }
}
void mergesort(vector<int>&v){
    /*uses divide and conquer type of algorithm T.C->O(nlogn)*/
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=0;i<n2;i++) b[i]=v[i+n1];
    mergesort(a);
    mergesort(b);
    mergesortedarray(a,b,v);
    a.clear();//used to delete extra space after it's use
    b.clear();
}
int main(){
    vector<int>v;
    int choice=1,x;
    while(choice){
        if(choice!=0){
            cout<<"enter data:";
            cin>>x;
        }
        cout<<"enter choice:";
        cin>>choice;
        v.push_back(x);
    }
    mergesort(v);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}