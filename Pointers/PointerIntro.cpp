#include<iostream>
using namespace std;
int main(){
    int x=4;
    int *p=&x;
    float y=12;
    float *p1=&y;
    
    cout<<x;        //it will print value of x
    cout<<&x;       //it will print addresss of x
    cout<<*p;       //it will print value of x whis is in the address of pointer
    cout<<p;        //it eill print the address of x

    cout<<y;        //it will print value of y
    cout<<&y;       //it will print addresss of y
    cout<<*p1;       //it will print value of y whis is in the address of pointer
    cout<<p1;        //it eill print the address of y

    //int *ptr=&x,*ptr1=&y; --->invalid syntax
    // int* ptr=&x,ptr1=&y; --->invalid syntax 
    /*this type of decleration of pointer is invalid because int* is the pointer
    data type which is only applicable for one variable at a time.but for the second 
    variable it will be only int data type insted of pointer data type*/ 
    int* ptr=&x,ptr1=y;  //--->valid syntax
    /*this type of decleration is will not give any error the rason is given above*/
    
}
