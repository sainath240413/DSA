#include<iostream>
using namespace std;
int main(){
    int n,a[10];
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array before deletion are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    n--; //method-->1
    cout<<"\nelements of the array after deletion are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    //method--->2
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    /*-->in method-->1 we are decrementing the size of the array by 1 
    to delete the element at end but 
  -->in method-->2 we are directly decrementing the size of the matrix 
    inside the for loopby just not printing last element of the array*/
}