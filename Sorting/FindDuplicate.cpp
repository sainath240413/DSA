//leetcode..revise..
#include<iostream>
#include<vector>
using namespace std;
int duplicateNumber(int a[],int n) {
    int i=0;
    while(i<n){
        int correctidx=a[i];
        if(a[correctidx]==a[i]) return a[i];
        else swap(a[i],a[correctidx]);
    }
    return 10;   
}
int main(){
    int a[]={1,1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<duplicateNumber(a,n);
}