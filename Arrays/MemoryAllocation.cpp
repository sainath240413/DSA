#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the elements of array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\naddress of each element of the array are:";
    for(int i=0;i<5;i++){
        cout<<&arr[i]<<" ";
    }
    /*in array memoy allocation is continuous as the difference
    between each address will depend on the sizeof datatype as 
    we see here int datatype is used so each address has difference
    of 4 bytes in hexadecimal form*/
}