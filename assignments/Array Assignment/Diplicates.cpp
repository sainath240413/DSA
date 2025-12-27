#include<iostream>
using namespace std;
int main(){
    int a[10],n,flag=0;//no duplicates
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[i]==a[j]) flag=1;
        }
    }
    if(flag==0) cout<<"no duplicates";
    else cout<<"yes duplicates are present";
}