#include<iostream>
using namespace std;
int main(){
    int a[10],n,sum=0;
    cout<<"enter number of elemnts of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        sum=sum+a[i];
    }
    cout<<"sum of elements of the array are:"<<sum;
}