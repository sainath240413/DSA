#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<"factorial of "<<n<<" is:";
    cout<<fact(n);
}