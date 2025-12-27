#include<iostream>
using namespace std;
int main(){
    int a[5];
    int x;
    cout<<"enter the element:\n";
    cin>>x;
    cout<<"enter the elements of the array:\n";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nelements of the array greater than "<<x<<" are:";
    int count=0;
    for(int i=0;i<5;i++){
        if(a[i]>x){
            cout<<a[i]<<" ";
            count++;
        }
    }
    cout<<"number of elements greater than "<<x<<" in the array are:"<<count;
}