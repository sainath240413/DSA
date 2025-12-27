#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter n: ";
    cin>>n;
    int fact=1;
    if(n==1 || n==0){
        cout<<1;
    }
    else{
    for(int i=1;i<=n;i++){
        fact*=i;
    }

     cout<<fact;
    }
   
    return 0;
}