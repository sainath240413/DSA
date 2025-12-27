#include<iostream>
using namespace std;
int main(){
    int n,a[10],ele,pos;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array before insertion are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nenter the element to insert:";
    cin>>ele;
    cout<<"enter the position to insert element:";
    cin>>pos;
    n++;
    for(int i=n;i>pos;i--){
        a[i-1]=a[i-2];
    }
    a[pos-1]=ele;
    cout<<"elements of the array after insertion are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    } 
}
