#include<iostream>
using namespace std;
int stairpath(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stairpath(n-1)+stairpath(n-2)+stairpath(n-3);
}
int main(){
    int n;
    cout<<"enter no of steps:";
    cin>>n;
    cout<<stairpath(n);
}