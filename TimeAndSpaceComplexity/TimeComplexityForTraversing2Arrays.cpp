#include<iostream>
using namespace std;
int main(){
    int n,m,a[10],b[10];
    cout<<"enter size of array1:";
    cin>>n;
    cout<<"enter size of array2:";
    cin>>m;
    cout<<"enter elements of the array1:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter elements of the array 2:";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    cout<<"elements of the array1 are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"elements of the array2 are:";
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    /*time complexity of the loops which are not nested of different sizes is O(n+m)*/
}