//leetcode..
#include<iostream>
#include<vector>
using namespace std;
int missingNumber(int a[],int n) {
    //method-1
    int i=0;
    while(i<n){
        int correctidx=a[i];
        if(i==correctidx || a[i]==n) i++;
        else swap(a[i],a[correctidx]);
    }
    for(int i=0;i<n;i++){
        if(a[i]!=i) return i;
    }
    return n;
    //method-2
    int actualsum=n*(n+1)/2,sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    return actualsum-sum;
    //method-3
    vector<bool>check(n+1,false);
    for(int i=0;i<n;i++){
        int ele=a[i];
        check[ele]=true;
    }
    for(int i=0;i<=n;i++){
        if(check[i]==false) return i;
    }
    return 100;
}

int main(){
    int a[]={5,0,3,1,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<missingNumber(a,n);
}