#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int a[10];
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int flag=1;//not a palindrome
    for(int i=0;i<=n/2;i++){
        if(a[i]!=a[n-1-i]){ 
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"it is a palindrome";
    else cout<<"not a palindrome";
}