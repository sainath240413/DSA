#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    //without maths using extra variable
    
    int num = 1;
    for(int i=1;i<=n;i++){
        cout<<num<<" ";
        num *= 2 ;
    }
    
    return 0;
}