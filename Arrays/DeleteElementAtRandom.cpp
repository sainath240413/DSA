#include<iostream>
using namespace std;
int main(){
    int n,a[10],pos;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elememts of the array beofre deletion are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"enter the position of the element to delete:";
    cin>>pos;
    for(int i=pos;i<n;i++){
        a[i-1]=a[i];
    }
    for(int i=n;i>pos;i--){
        a[i-1]=a[i];        //recheck this loop
    }
    n--;
    cout<<"elements of the array after deletion are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}