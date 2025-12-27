#include<iostream>
using namespace std;
int main(){

    /*sum of even numbers in a given number*/
    int n;
    cout<<"enter n: ";
    cin>>n;
    int sum=0,ld;
   while(n>0){
    ld=n%10;
    if(ld%2==0) sum=sum+ld;
    n/=10;
   }
   cout<<sum;

   
    return 0;
}