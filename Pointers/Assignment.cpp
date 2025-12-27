#include<iostream>
using namespace std;
int main(){
//     /*product of two numbers using pointers*/
//     int a,b;
//     cout<<"enter a:";
//     cin>>a;
//     cout<<"enter b:";
//     cin>>b;
//     int* ptr1=&a;
//     int* ptr2=&b;
//     cout<<"the product of "<<*ptr1<<" and "<<*ptr2<<" is "<<(*ptr1)*(*ptr2);

// /*pridict the output--> 1*/

//     int a = 10, b = 20;
//     int *ptr = &a;
//     b = *ptr + 1;
//     ptr = &b;
//     cout << *ptr <<" "<< a <<" "<< b;

// /*pridict the output--> 2*/

//     int a = 15, b = 20;
//     int *ptr = &a;
//     int *ptr2 = &b;
//     *ptr = *ptr2;
//     cout << a <<" "<< b;

// /*is the program correct or not*/

//     int a = 10, b = 20;
//     int *ptr;
//     *ptr = 5;
//     cout<<*ptr;
    /*yes this code is correct but it may give runtime error 
    as it is not pointing any variable in the program it contain 
    garbage address so it may give segmentation fault in this 
    laptop the output is nothing kuch bhi nahi print ho raha hai*/
// char *ptr;
// char str[]="abcdefg";
// ptr=str;
// ptr+=5;
// cout<<ptr;

int numbers[5];
int *p;
p=numbers;*p=10;
p++;*p=20;
p=&numbers[2];*p=30;
p=numbers+3;*p=40;
p=numbers;*(p+4)=50;
for(int i=0;i<5;i++){
    cout<<numbers[i]<<" ";
}
}