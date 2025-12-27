#include<iostream>
using namespace std;
void search(int a[],int key,int n){
    if(n==0) {
        cout<<-1;
        return;
    }
    if(a[n-1]==key) {    
        cout<<key<<" is at index "<<n-1;
        return;
    }
    search(a,key,n-1);
}
int main(){
    int a[10],n,ele;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nenter key to search:";
    cin>>ele;
    search(a,ele,n);
}