#include<iostream>
using namespace std;
int main(){
    int size,key,arr[10];
    cout<<"enter the size of the array:";
    cin>>size;
    cout<<"enter the elements of the array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nenter the element to search:";
    cin>>key;
    for(int i=0;i<size;i++){
        if(arr[i]==key){ 
           if(key==arr[i]) cout<<"element found at position at "<<i+1;
           else cout<<"element not found";
        }
    }
   
}