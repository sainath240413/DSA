#include<iostream>
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
int main(){
    int n;
    int a[10];
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    create(a,n,0);
    cout<<"elements of the array are:";
    display(a,n,0);
}