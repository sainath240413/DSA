/*difference between the sum of elements at 
even indices to the sum of elements at odd
indices.*/
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
    int diff,sumeven=0,sumodd=0;
    for(int i=0;i<n;i++){
        if(i%2==0) sumeven+=a[i];
        else sumodd+=a[i];
    }
    diff=sumeven-sumodd;
    cout<<diff;
}