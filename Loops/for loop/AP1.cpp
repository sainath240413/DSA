#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    //method --->1 using AP formula

    for(int i=1;i<=2*n-1;i+=2){
        cout<<i<<" ";
    }

    //method --->2 without maths using extra variable
    
    int num = 1;
    for(int i=1;i<=n;i++){
        cout<<num<<" ";
        num+=2;
    }
    
    return 0;
}