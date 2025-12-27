#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;

             //method-1

    if(n>0||n==0){
        cout<<n;
    }
    else{
        cout<< (-n);
    }
    
              //method-2
    
        if(n<0){
            n = -n;
        }
        cout<<n;

     return 0;

}