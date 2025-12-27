#include<iostream>
using namespace std;
int main(){
    int n,sum=0,ld=0;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;n>0;i++){
        ld=n%10;
        sum+=ld;
        n/=10;
    }
    cout<<sum;
    return 0;
}