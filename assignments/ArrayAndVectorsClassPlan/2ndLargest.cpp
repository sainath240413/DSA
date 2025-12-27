#include<iostream>
using namespace std;
int main(){
    int a[10],n,smax,max;
    max=INT16_MIN;
    smax=INT16_MIN;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(max<a[i]) max=a[i];
    }
    for(int i=0;i<n;i++){
        if(smax<a[i] && a[i]!=max) {
            smax=a[i];
        }
    }
    cout<<"the second largest element of the array is:"<<smax;
}
