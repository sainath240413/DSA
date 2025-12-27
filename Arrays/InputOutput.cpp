#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of the array:";
    cin>>n;
    //int arr[n];
    /*if we want to intialise the size of the array we  
    need to use dynamic memory allocation or vectors*/
    int arr[10];
    /*or just give any value in place of n while initialising
    array and then change the size of array by taking n as input*/
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr; 
    /* this also gives the address of the array which is the first
    element address*/
}