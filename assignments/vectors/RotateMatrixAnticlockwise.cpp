#include<iostream>
using namespace std;
int main(){
    int a[10][10],n,m;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter elements of the matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"elements of the matrix are:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //reverse
    cout<<"elements of matrix after rotating 90 degrees anticlock wise:";
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}