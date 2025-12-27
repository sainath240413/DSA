//not stable 
//internal sorting was variartion of quick sort
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
void quicksort(vector<int>&v,int starti,int endi){
    if(starti>=endi) return;
    int pivotidx=partition(v,starti,endi);
    quicksort(v,starti,pivotidx-1);
    quicksort(v,pivotidx+1,endi);
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
    int n=v.size();
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    quicksort(v,0,n-1);
    cout<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}