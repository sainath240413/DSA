//leetcode...revise
/*Koko loves to eat bananas.There are n piles of bananas, the ith pile has piles[i]
bananas.The guards have gone and will come back in h hours.
Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some 
pile of bananas and eats k bananas from that pile. If the pile has less than k 
bananas, she eats all of them instead and will not eat any more bananas during this 
hour.
Koko likes to eat slowly but still wants to finish eating all the bananas before the
guards return.
Return the minimum integer k such that she can eat all the bananas within h hours.*/
#include<iostream>
using namespace std;
bool check(int speed,int a[],int h,int n){
    long count=0;
    for(int i=0;i<n;i++){
        if(count>h) return false;
        if(speed>=a[i]) count++;
        else if(a[i]%speed==0) count+=a[i]/speed;
        else count+=a[i]/speed+1;
    }
    if(count>h) return false;
    else return true;
}
int main(){
    int a[10],n,hours;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of teh array:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"enter hours:";
    cin>>hours;
    int lo=1;
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]) max=a[i];
    }
    int hi=max;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(check(mid,a,hours,n)){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    cout<<ans;
}