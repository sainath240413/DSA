#include<iostream>
using namespace std;
int main(){
    int n,reverse=0,ld=0,a;
    cout<<"enter n: ";
    cin>>n;
    while(n>0){
        ld=n%10;
        reverse*=10;
        reverse+=ld;
        n/=10;
    }
    cout<<reverse;
    return 0;
}