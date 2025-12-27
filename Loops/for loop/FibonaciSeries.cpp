#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int a=1,b=1;

    /*when fibonaci series starts from 0*/

    int sum=0;
    for(int i=0;i<n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<b;

    /*when fibonaci series starts from 1*/

    int sum1=1;
    for(int i=0;i<n-2;i++){
        sum1=a+b;
        a=b;
        b=sum1;
    }

    cout<<sum1;
    return 0;
}