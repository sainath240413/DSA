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
    int min=INT16_MAX;
    for(int i=0;i<n;i++){
        if(min>a[i]) min=a[i]; 
    }
    cout<<"minimum element in the array is: "<<min;
    
}