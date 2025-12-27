//revise...
#include<iostream>
#include<vector>
using namespace std;
vector<int> firstnegetivenumber(vector<int>&v,int a[],int n,int windowsize){
    int k=windowsize;
    int p=-1;
    for(int i=0;i<k;i++){
        if(a[i]<0){
            p=i;
            break;
        }
    }
    if(p==-1) v[0]=1;
    else v[0]=a[p];
    int i=1;
    int j=k;
    while(j<n){
        if(p>=i) v[i]=a[p];
        else{
            p=-1;
            for(int x=i;x<=j;x++){
                if(a[x]<0){
                    p=x;
                    break;
                }
            }
            if(p!=-1) v[i]=a[p];
            else v[i]=1;
        }
        i++;
        j++;
    }
    return v;
}
int main(){
    int n,a[10];
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>a[i];
    int windowsize;
    cout<<"enter windowsize:";
    cin>>windowsize;
    vector<int>v(n-windowsize+1);
    firstnegetivenumber(v,a,n,windowsize);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}