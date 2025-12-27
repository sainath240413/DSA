#include<iostream>
using namespace std;
int main(){
    int a[10],key,n;
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
    cout<<"enter the key element to check for occurance:";
    cin>>key;
    int count=0;
    for(int i=0;i<n;i++){
        if(key==a[i]) count++;
    }
    cout<<key<<" occured "<<count<<" times in the array";
}