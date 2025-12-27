#include<iostream>
using namespace std;
/*using pointers and functions*/
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(int m,int n){
    int a,b;
    cout<<"emter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    /*without using pointers and functions 
    and using the 3rd variable*/
    int temp=a;
    a=b;
    b=temp;
    /*without using pointers and extra variable*/
    a=a+b;
    b=a-b;
    a=a-b;
    /*using functions and pointers*/
    swap(&a,&b);
    cout<<a<<" "<<b;
}