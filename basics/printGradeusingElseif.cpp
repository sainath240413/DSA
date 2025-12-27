#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n: ";
cin>>n;
    if(n>=90 && n<=100){
        cout<<"A grade";
    }
    else if(n>=75){
        cout<<"B grade";
    }
    else if(n>=60){
        cout<<"C grade";
    }
    else if(n>=45){
        cout<<"D grade";
    }
    else if(n>=35){
        cout<<"E grade";
    }
    else{
        cout<<"FAIL ";
    }

    return 0;
}