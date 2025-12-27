#include<iostream>
using namespace std;
int main(){
    int n,ele;
    int a[10];
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elemets of array before insertion are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nenter the element to insert:";
    cin>>ele;
    n++;
    a[n]=ele;
    cout<<"elements of the array after insertion are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    /*re check this code*/
}
