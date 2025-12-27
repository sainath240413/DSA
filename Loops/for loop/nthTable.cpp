#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    
    //method --->1
    
    // for(int i=0;i<=n*10;i=i+n){
    //     cout<<i<<" ";
    // }
   
    //method --->2

    for(int i=1;i<=n*10;i=i++){
        if(i%n==0) {
        cout<<i<<" ";
        }
      }
    return 0;
}