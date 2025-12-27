#include<iostream>
using namespace std;
int main(){
    int n,a[10],sum=0;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nelements of the array:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"sum of elements of the array are:"<<sum<<endl;
} 