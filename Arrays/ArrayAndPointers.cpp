#include<iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5};
    int* ptr=a; 
    int* ptr1=&a[0];
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
        cout<<a[i]<<" ";
    }
    /*here pointer ptr stores the address of the array these are the correct methods
    of storing the address of the array in pointer*/
    /*from the for loop we can say that we can use ptr and pointer has full access to
    the array if the pointer has the address of the first elment of tne array we can
    change the data in the array using pointer without using the name of the array*/


    // int* ptr=&a;
    // int* ptr=a[0];
    /*these are the misconceptions for storing the address of the array in the pointer
    here a[0] is an integer value and &a represents the address of the whole array
    which does not exist because it is a continuous memory allocation of data the 
    address changes as the index of the array changes so there is no exact address 
    to an array but we treet address of the first element as the address of the 
    array which makes the accessing of the array easier.*/
}