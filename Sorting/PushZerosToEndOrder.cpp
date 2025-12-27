#include<iostream>
using namespace std;
int main(){
    int a[10],n;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]==0){//change is here..
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}