#include<iostream>
using namespace std;
void swap(int *a,int *b){  /*or*/  void swap(int &a,int &b);  //-->pass by reference
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    swap(a,b);  /*or*/  swap(&a,&b);  
    /*-->when we directly pass the values or address to the pointer it is pass by value
    --->when we take the values from the function to the address using amphacent is called 
    pass by reference it is nothing but passing a variable with it's address */
    cout<<a<<endl<<b;
}