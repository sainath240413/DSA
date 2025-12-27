/*Given an array, arr[] containing 'n' integers, the task is to find an integer (say K) 
such that after replacing each and every index of the array by |ai-K| where (i = [1, n]), 
results in a sorted array. If no such integer exists that satisfies the above condition then
return -1.*/
#include<iostream>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>=b) return a;
    else return b;
}
float min(float a,float b){
    if(a<=b) return a;
    else return b;
}
int main(){
    int a[10],n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"elements of array are:";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    //actual code...
    float kmin=(float)(INT16_MIN);
    float kmax=(float)(INT16_MAX);
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){ // for kmin
            kmin=max(kmin,(a[i]+a[i+1])/2.0);
        }
        else{ //for kmax
            kmax=min(kmax,(a[i]+a[i+1])/2.0);
        }
        if(kmin>kmax){
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){ //kmin and kmax are integers
            cout<<"there is only one value of k:"<<kmin;
        }
        else{
            cout<<-1;
        }
    }
    else{
        if(kmin-(int)kmin>0){
            kmin=(int)kmin+1;
        }
        cout<<"range of k is:["<<kmin<<","<<(int)kmax<<"]";
    }
}