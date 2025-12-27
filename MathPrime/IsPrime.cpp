#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1) return true;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
/*for every composite number there will be even no of factors.
if it is a perfect square then there will be odd no of factors*/
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<isprime(n);
}