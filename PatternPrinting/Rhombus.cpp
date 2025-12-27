#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter no.of rows: ";
    cin>>n;
    cout<<"enter no.of coloums: ";
    cin>>m;

    
    for(int i=0;i<n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<m;j++){
            cout<<"* ";
        }
        cout<<endl; 
    }
}