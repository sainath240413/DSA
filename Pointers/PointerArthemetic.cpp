#include<iostream>
using namespace std;
int main(){
    int x=1;
    int* ptr=&x;
    ptr=ptr+1;
    cout<<ptr<<endl;  //0x61ff0c
    cout<<ptr+1;      //0x61ff10

    /*these addreses will be there in hexadecimal fashion
    as int takke 4 bytes the address increases by 4 bytes
    it changes according to the data type which we are taking*/

    int x=4;
    int* ptr=&x;
    cout<<*ptr<<endl; // 4
    ptr=ptr+1;
    cout<<*ptr; /*6422284 reason for this is the address stored 
    in the pointer will be incremented according to the data type 
    here for int 4bits address will be incremented and now printing 
    the value at that incremented address it may be anything here it 
    is that value.*/

    int x=4;
    int* ptr=&x;
    cout<<*ptr<<endl; // 4
    *ptr=*ptr+1;
    cout<<*ptr;       //5

    (*ptr)++;
    cout<<*ptr;
    ++*ptr;  //this will not give error but it's good to use brackets 
    /*if we directly increment/decrement the *ptr as (*ptr)++ then only it 
    will work if we increment value in the pointer in this way *ptr++ then 
    it will give error but only for post increment because it does't make 
    sense, it is a combination of *ptr which means to fetch the value of 
    variable whose address is stored in the pointer and ptr++ which means
    incremnt the address and point to another variable so here the compiler
    should not know that to fetch the data first or to increment the address 
    first.but (*ptr)++ this decleration specifies the operation to perform 
    using brackets this fetch the data first then increment the data here 
    only data in the ptr is incremented not the address.*/
    
    /* address change depending on data type 
    int--->4/2 bytes depending on compiler(only for int)
    char/bool--->1 byte
    float--->4 bytes
    long--->8 bytes.
    double--->8 bytes*/
}
