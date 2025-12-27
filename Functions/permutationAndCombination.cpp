#include<iostream>
using namespace std;
int fact(int a){
    int fact=1;
        for(int i=1;i<=a;i++){
            fact*=i;
        }
    return fact;
}
int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int npr(int n, int r){
    return fact(n)/fact(n-r);
}
int main(){
    int n,r;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter r:";
    cin>>r;
    cout<<npr(n,r);
    cout<<ncr(n,r);
}