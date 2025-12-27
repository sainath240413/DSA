#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],n,m;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter no of coloumns:";
    cin>>m;
    cout<<"enter the elements of the array1:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements of the array2:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    cout<<"elements of the array1 are:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"elements of the array2 are:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    int add[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"elements of the add are:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }
}