#include<iostream>
using namespace std;
void reversearray(int a[],int n){
    if(n==0) return;
    cout<<a[n-1]<<" ";
    reversearray(a,n-1);
}
int main(){
    int a[10],n;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elementys of the array are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reversearray(a,n);
}