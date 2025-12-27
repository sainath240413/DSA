#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(max(a,b)%min(a,b)==0) return min(a,b);
    else{
        int n=max(a,b)%min(a,b);
        a=min(a,b);
        return gcd(a,n);
    } 
}
int main(){
    int a,b;
    cout<<"enter a,b:";
    cin>>a>>b;
    cout<<gcd(a,b);
}