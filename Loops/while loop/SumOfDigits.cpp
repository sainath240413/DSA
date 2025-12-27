#include<iostream>
using namespace std;
int main(){
    int n,sum=0,ld=0;
    cout<<"enter n: ";
    cin>>n;
    while(n>0){
        ld=n%10;
        sum+=ld;
        n/=10;
    }
    cout<<sum;
    return 0;
}