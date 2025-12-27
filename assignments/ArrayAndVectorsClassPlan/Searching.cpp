#include<iostream>
using namespace std;
int main(){
    int a[10],n,key;
    cout<<"enter number of elements in the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"enter key to search:";
    cin>>key;
    bool found=0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<"key found in position "<<i+1;
            found=1;
            break;
        }
    }
    if(found==0) cout<<"key not found in the array";
}