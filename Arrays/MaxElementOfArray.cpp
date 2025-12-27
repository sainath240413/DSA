#include<iostream>
using namespace std;
int main(){
    int n,a[10];
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]) max=a[i]; 
    }
    cout<<"maximum element in the array is: "<<max;
    
}