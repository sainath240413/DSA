#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter operation to perform: ";
    cin>>ch;
    switch(ch){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        case '%':
            cout<<a%b;
            break;
    default:{
            cout<<"invalid input";
        }
    }

    return 0;
}