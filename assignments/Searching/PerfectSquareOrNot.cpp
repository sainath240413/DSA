/*Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
 Input 1: n = 36
 Output 1: yes
 Input 2: n = 45
 Output 2: no*/
#include<iostream>
using namespace std;
bool perfectsquare(int n){
    /*this snippet takes O(n) time complexity*/
    if(n==1) return true;
    for(int i=2;i<=n/2;i++){
        if(i==n/i) return true;
    }
    return false;

    /*this snippet takes O(n^1/2) time complexity*/
    if(n<1) return false;
    for(int i=1;i*i<=n;i++){
        if (i*i==n) return true;
    }
    return false;

    /*using binary search makes time complexity into O(log n) which is always better than above for large
    values of input*/
    int lo=1,hi=n;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid==n/mid) return true;
        else if(mid>n/mid) hi=mid-1;
        else lo=mid+1;
    }
    return false;
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<perfectsquare(n);
} 