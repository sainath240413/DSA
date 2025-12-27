#include<iostream>
#include<vector>
using namespace std;
void mergesortedarray(vector<int>&a,vector<int>&b,vector<int>&v){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            v[k]=a[i];
            i++;
            k++;
        }
        else{
            v[k]=b[j];
            j++;
            k++;
        }
    }
    while(j<b.size()){
        v[k]=b[j];
        j++;
        k++;
    }
    while(i<a.size()){
        v[k]=a[i];
        i++;
        k++;
    }
}
void mergesort(vector<int>&v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=0;i<n2;i++) b[i]=v[i+n1];
    mergesort(a);
    mergesort(b);
    mergesortedarray(a,b,v);
}
int main(){
    vector<int>v;
    int choice=1;
    while(choice){
        int x;
        cout<<"enter data:";
        cin>>x;
        v.push_back(x);
        cout<<"enter choice:";
        cin>>choice;
    }
    mergesort(v);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}