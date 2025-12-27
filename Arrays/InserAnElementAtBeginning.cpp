#include<iostream>
using namespace std;
int main(){
    int n,ele;
    int arr[10];
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"enter the element to insert:";
    cin>>ele;
    n++;
    for(int i=n;i>0;i--){
        arr[i-1]=arr[i-2];
    }
    arr[0]=ele;
    cout<<"elements of the array after inserton are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}