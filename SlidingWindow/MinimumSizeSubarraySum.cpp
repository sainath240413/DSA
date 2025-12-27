    //leetcode..revise..
#include<iostream>
using namespace std;
int minSubArrayLen(int a[],int n,int target) {
    //this is brute force of TC->O(n^2)
    // int minsum=INT16_MAX;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     int count=0;
    //     for(int j=i;j<n;j++){
    //         sum+=a[j];
    //         count++;                
    //         if(target<=sum){
    //             minsum=min(count,minsum);
    //             break;
    //         }
    //     }
    // }
    // return (minsum==INT16_MAX)? 0:minsum;

    //using sliding window TC->O(n);
    int j=0,i=0;
    int sum=0,minlength=INT_MAX;
    while(j<n){
        sum+=a[j];
        while(sum>=target){
            int len=j-i+1;
            minlength=min(minlength,len);
            sum-=a[i];
            i++;
        }
        j++;
    }
    return (minlength==INT_MAX)? 0:minlength;
}
int main(){
    int n,target,a[10];
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"enter target:";
    cin>>target;
    cout<<minSubArrayLen(a,n,target);
}