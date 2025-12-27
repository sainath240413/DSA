/*
Input: {100,80,60,70,60,75,85}
output:{1,1,1,2,1,4,6}
how many days have less than the stock value than today including today
it can be done using prev greater element but we need to store index insted of the value in pge array 
*/
#include<iostream>
#include<stack>
using namespace std;
void stockSpan(int a[],int ans[],int n){
    ans[0]=1;
    for(int i=1;i<n;i++){
        ans[i]=i-a[i];
    }
}
void prevGreaterElementIdx(int a[],int pge[],int n){
    stack<int>s;
    pge[0]=-1;
    s.push(0);
    for(int i=1;i<n;i++){
        while(s.size()>0 && a[s.top()]<=a[i]){
            s.pop();
        }
        if(s.size()==0) pge[i]=-1;
        else pge[i]=s.top();
        s.push(i);
    }
}
int main(){
    int a[]={100,80,60,70,60,75,85};
    int n=sizeof(a)/sizeof(int);
    int pge[7];
    int ans[7];
    cout<<"input array:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    prevGreaterElementIdx(a,pge,n);
    stockSpan(pge,ans,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}