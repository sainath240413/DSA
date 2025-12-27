#include<iostream>
using namespace std;
void square(int n){
    cout<<n*n;
}
void noOfDigits(int n){
     int count=0;
     /*using for loop*/
    for(int i=1;n>0;i++){
        n=n/10;
        count++;
    }
    /*using while loop*/
    while(n>0){
        count++;
        n=n/10; 
    }
    cout<<count;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    noOfDigits(n);
    cout<<endl;
    square(n);
    
}
