#include<iostream>
#include<limits>
using namespace std;
void create(int a[],int n,int idx){
    if(idx==n) return;
    cin>>a[idx];
    create(a,n,idx+1);
}
void display(int a[],int n,int idx){
    if(idx==n) return;
    cout<<a[idx]<<" ";
    display(a,n,idx+1);
}
int maximum(int a[],int n,int idx,int max){
    if(idx==n) return max;
    if(a[idx]>max) max=a[idx];
    return maximum(a,n,idx+1,max);
}
int main(){
    int n,a[10];
    int max=INT16_MIN;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    create(a,n,0);
    cout<<"elements of the array are:";
    display(a,n,0);
    cout<<"maximum element in the matrix is:";
    cout<<maximum(a,n,0,max);
}
