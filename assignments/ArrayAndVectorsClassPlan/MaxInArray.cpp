#include<iostream>
using namespace std;
int main(){
    int a[10],n;
    int max=INT16_MIN;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
    }
    cout<<"maximum element of the array is:"<<max;
}