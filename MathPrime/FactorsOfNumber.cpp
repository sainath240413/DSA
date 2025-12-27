#include<iostream>
#include<cmath>
using namespace std;
void factors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" "<<n/i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    factors(n);
}