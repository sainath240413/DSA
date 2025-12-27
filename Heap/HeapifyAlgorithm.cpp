#include<iostream>
#include<vector>
using namespace std;
void minheapify(vector<int>&a,int i){
    int n=a.size();
    while(true){
        int l=2*i,r=2*i+1;
        if(l>=n) break;
        if(r>=n){
            if(a[i]>a[l]){
                swap(a[i],a[l]);
                i=l;
            }
            else break;
        }
        if(a[l]<a[r]){
            if(a[i]>a[l]){
                swap(a[i],a[l]);
                i=l;
            }
            else break;
        }
        else{
            if(a[i]>a[r]){
                swap(a[i],a[r]);
                i=r;
            }
            else break;
        }
    }
}
void maxheapify(vector<int>&a,int i){
    int n=a.size();
    while(true){
        int l=2*i;
        int r=2*i+1;
        if(l>=n) break;
        if(r>=n){
            if(a[i]<a[l]){
                swap(a[i],a[l]);
                i=l;
            }
            break;
        }
        if(a[l]>a[r]){
            if(a[i]<a[l]){
                swap(a[i],a[l]);
                i=l;
            }
            else break;
        }
        else{
            if(a[i]<a[r]){
                swap(a[i],a[r]);
                i=r;
            }
            else break;
        }
    }
}
void display(vector<int>arr){
    for(int i=1;i<arr.size();i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    vector<int>a={-1,10,2,14,11,1,4};
    int n=a.size();
    display(a);
    //min heapify
    for(int i=n/2;i>0;i--){
        minheapify(a,i);
    }
    display(a);
    //max heapify
    for(int i=n/2;i>0;i--){
        maxheapify(a,i);
    }
    display(a);
}