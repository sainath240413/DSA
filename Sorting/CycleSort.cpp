#include<iostream>
using namespace std;
int main(){
    int a[10],n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>a[i];
    int i=0;
    while(i<n){
        int correctidx=a[i]-1;
        if(i==correctidx) i++;
        else swap(a[i],a[correctidx]);
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}