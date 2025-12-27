/*array of integers, change the value of all
odd indexed elements to its second multiple
and increment all even indexed values by 10.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of the array:";
    cin>>n;
    int a[10];
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(i%2==0) a[i]=a[i]+10;
        else a[i]=a[i]*2;
    }
    cout<<"elements of the array after updating are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}