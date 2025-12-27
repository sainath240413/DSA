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
    n--;  //method-->1
    for(int i=0;i<n;i++){
        a[i]=a[i+1];
    }
    
    /*we can use both the methods:
    --->in method 1 we are decrementing the size of the array
    first and then we are rearranging the elements of the array.
    --->in method 2 we are rearranging the elements in the arrray
    first and then we are decrementing the size of the array */

    for(int i=1;i<n;i++){   //method-->2
        a[i-1]=a[i];
    }
    n--;
    cout<<"\nelements of the array after deletion are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}