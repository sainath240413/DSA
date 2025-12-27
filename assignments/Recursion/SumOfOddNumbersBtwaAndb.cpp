#include<iostream>
using namespace std;
int printadd(int a,int b,int sum){
    if(b<a) return sum;
    if(b%2!=0) sum+=b;
    return printadd(a,b-1,sum);
}
int main(){
    int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;
    cout<<printadd(a,b,0);
}