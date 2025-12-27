#include<iostream>
using namespace std;
void input(int arr[],int n){
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
/*here the arr named array in the function is a pointer which can be written in the
form of int* a which represents the same as int arr[]*/
void output(int arr[],int n){
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void change(int arr[]){
    arr[3]=12;
}
int main(){
    int n,a[10];
    cout<<"enter size of the array:";
    cin>>n;
    input(a,n);
    output(a,n);
    change(a);
    output(a,n);
    /* for arrays there the function call is always a call by reference*/
    /* only address of the array is passed but not the elements of the array
    and number of elements of the array and also sizeof function will not work
    in the function because the array in the function is a pointer not the array
    as we know pointer are meant to access the data and change the data according 
    to user need.*/
}