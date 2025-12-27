#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&v,int starti,int endi){
    int pivot=v[starti],count=0;
    for(int i=starti+1;i<=endi;i++){
        if(v[i]<=pivot) count++;
    }
    int pivotidx=count+starti;
    swap(v[pivotidx],v[starti]);
    int i=starti,j=endi;
    while(i<pivotidx && j>pivotidx){
        if(v[i]<=pivot) i++;
        if(v[j]>pivot) j--;
        else if(v[i]>pivot && v[j]<pivot){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
int kthlargest(vector<int>&v,int starti,int endi,int k){
    int targetidx=v.size()-k;//just changed here
    int pivotidx=partition(v,starti,endi);  
    if(pivotidx==targetidx) return v[pivotidx];//here from kth smallest element
    else if(pivotidx<k) return kthlargest(v,pivotidx+1,endi,k);
    else return kthlargest(v,starti,pivotidx-1,k);
}
int main(){
    vector<int>v;
    int k;
    int choice=1;
    while(choice){
        int x;
        cout<<"enter data:";
        cin>>x;
        v.push_back(x);
        cout<<"enter choice:";
        cin>>choice;
    }
    cout<<"enter k:";
    cin>>k;
    int n=v.size();
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    cout<<kthlargest(v,0,n-1,k);
}