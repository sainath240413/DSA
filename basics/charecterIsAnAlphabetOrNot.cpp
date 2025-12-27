#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"enter charecter: ";
    cin>>ch;
    
    //method-1 ----> using inbuilt function   
    
    if(isalpha(ch)!=0){
        cout<<ch<<" is a alphabet"; 

         /* isalpha()  --> is the function which checks the
          given charecter is an alphabet or not which is inbuilt in c++
          and the condition is if isalpha(ch!=0) then input charecter is an alphabet
         */

           }
    else{
        
        cout<<ch<<" is not a alphabet";
    }

    //method-2  ----->  using if condition

    int ascii = (int)ch;
    if(ascii>=97 && ascii<=122){
        cout<<ch<<" is lowercase alphabet";
    }
    if(ascii>=65 && ascii<=90){
        cout<<ch<<" is uppercase alphabet";
    }

    return 0;
}
