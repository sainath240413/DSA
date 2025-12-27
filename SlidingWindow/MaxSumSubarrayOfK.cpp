#include<iostream>
using namespace std;
int main(){
    int n,a[10],k;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"enter k:";
    cin>>k;
    //brute force
    // int maxsum=INT16_MIN;
    // int maxidx=0;
    // for(int i=0;i<=n-k;i++){
    //     int sum=0;
    //     for(int j=i;j<i+k;j++){
    //         sum+=a[j];
    //     }
    //     if(maxsum<sum){
    //         maxsum=sum;
    //         maxidx=i;
    //     }
    // }

    //using sliding window and prefix sum
    int maxsum=INT16_MIN;
    int maxidx=0;
    int prevsum=0;
    for(int i=0;i<k;i++){
        prevsum+=a[i];
    }
    maxsum=prevsum;
    int i=1,j=k;
    while(j<n){
        int currentsum=prevsum+a[j]-a[i-1];
        if(maxsum<currentsum){
            maxsum=currentsum;
            maxidx=i;
        }
        prevsum=currentsum;
        i++;
        j++;
    }
    cout<<maxsum<<endl<<maxidx;
}