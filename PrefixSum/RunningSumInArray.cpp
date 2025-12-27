//leetcode...
#include<iostream>
using namespace std;
void runningsum(int a[],int n,int res[]){
    res[0]=a[0];
    for(int i=1;i<n;i++){
        res[i]=res[i-1]+a[i];
    }
}
int main(){
    int a[10],res[10];
    int n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>a[i];
    runningsum(a,n,res);
    for(int i=0;i<n;i++) cout<<res[i]<<" ";
}