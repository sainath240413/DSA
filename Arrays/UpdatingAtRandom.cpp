#include<iostream>
using namespace std;
int main(){
    int n,pos,a[10],ele;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array before updattion are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"enter the position to update:";
    cin>>pos;
    cout<<"enter the updating element:";
    cin>>ele;
    a[pos-1]=ele;
    cout<<"elements of the array after updation are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}