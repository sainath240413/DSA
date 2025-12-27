#include<iostream>
using namespace std;
int missingpositive(int a[],int n){
    //brute force --> time complexity->O(n)
    for(int i=1;i<=n;i++){
        if(a[i]!=i) return i;
    }
}
int  missingpositive(int a[],int n){
    //using binary search --> time complexity->O(log n)
    int first=0,last=n-1,ans=-1;
    while(first<=last){ 
        int mid=first+(last-first)/2;
        if(a[mid]==mid){
            first=mid+1;
        }
        else{
            ans=mid;
            last=mid-1;
        }
    }
    return ans;
}
int main(){
    int a[10],n;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of teh array:";
    for(int i=1;i<=n;i++) cin>>a[i];
    cout<<missingpositive(a,n);
}