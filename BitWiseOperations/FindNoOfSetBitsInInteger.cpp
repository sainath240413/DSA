/*setbits are no of 1's in the binary form of the number*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<__builtin_popcount(n);//inbuilt function to get no of setbits

    //or
    
    int count=0;
    while(n>0){
        count++;
        n=(n & (n-1));
    }
    cout<<count;
}