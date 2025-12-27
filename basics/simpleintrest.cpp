#include<iostream>
using namespace std;
int main(){
    float si,p,t,r;
    cout<<"enter principle: "<<endl;
    cin>>p;
    cout<<"enter time: "<<endl;
    cin>>t;
    cout<<"enter rate: "<<endl;
    cin>>r;
    si=(p*r*t)/100;
    cout<<"simple intrest is "<<si;
    return 0;
}