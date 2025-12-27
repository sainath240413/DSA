#include<iostream>
using namespace std;
int main(){
    int a[10],n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
        a[i]=a[i]+a[i-1];
    }
    int ansidx=-1;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(a[n-1]/2==a[i]){
            flag=true;
            ansidx=i;
            break;
        }
    }
    cout<<ansidx<<endl;
}