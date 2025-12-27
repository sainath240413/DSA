#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0) return 1;
    int res=n*fact(n-1);
    return res;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int npr(int n,int r){
    return fact(n)/fact(n-r);
}
int main(){
    int n,r;
    cout<<"enter n,r in nCr or nPr:";
    cin>>n>>r;
    cout<<n<<"C"<<r<<" value is:";
    cout<<ncr(n,r);
    cout<<endl<<n<<"P"<<r<<" value is:";
    cout<<npr(n,r);
}