#include<iostream>
using namespace std;
int main(){
    int n,nsp=1;
    cout<<"enter n:";
    cin>>n;
    for(int j=1;j<=2*n-1;j++){
            cout<<"*";
        }
        cout<<endl;
    for(int i=1;i<=n-1;i++){
       for(int k=1;k<=n-i;k++){
        cout<<"*";
       }
       for(int j=1;j<=nsp;j++){
        cout<<" ";
       }
       nsp+=2;
       for(int k=1;k<=n-i;k++){
        cout<<"*";
       }
       cout<<endl;
    }
}