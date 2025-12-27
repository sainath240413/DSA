#include<iostream>
using namespace std;
int stairpath(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stairpath(n-1)+stairpath(n-2)+stairpath(n-3);
}
int main(){
    int steps;
    cout<<"enter no of steps:";
    cin>>steps;
    cout<<"No of combiantions of steps:";
    cout<<stairpath(steps);
}