#include<iostream>
using namespace std;
int main(){
    int a[10],product=1,n;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        product=product*a[i];
    }
    cout<<"the product of all elements of the array is:"<<product;
}