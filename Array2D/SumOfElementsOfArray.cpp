#include<iostream>
using namespace std;
int main(){
    int a[10][10],n,m;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter no of coloumns:";
    cin>>m;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"elements of the array are:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
    }
    cout<<sum;
}