#include<iostream>
using namespace std;
int main(){
    int n,max1,max2,max3;
    cout<<"enter the size of the array:";
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
    max1=a[0],max2=a[0],max3=a[0];
    for(int i=0;i<n;i++){
        if(max1<a[i]) max1=a[i];
    }
    for(int i=0;i<n;i++){
        if(max2<a[i] && a[i]<max1) max2=a[i];
    }
    for(int i=0;i<n;i++){
        if(max3<a[i] && a[i]<max2) max3=a[i];
    }
    cout<<max1<<" "<<max2<<" "<<max3;
}