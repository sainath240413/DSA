/*Problem Statement:
    arr:  3 1 2  5 4  6 2 3
    ans: -1 3 3 -1 5 -1 6 6
    answer is the array of previous greater element to the respective index if there is no greater element in array
    then it's corresponding index in the answer array would be -1. 
*/
#include<iostream>
#include<stack>
using namespace std;
void prevGreater(int a[],int ans[],int n){
    stack<int>s;
    ans[0]=-1;
    s.push(a[0]);
    for(int i=1;i<n;i++){
        while(s.size()>0 && a[i]>=s.top()) s.pop();
        if(s.size()==0) ans[i]=-1;
        else ans[i]=s.top();
        s.push(a[i]);
    }
}
int main(){
    int a[]={3,1,2,5,4,6,2,3};
    int n=sizeof(a)/sizeof(int);
    int ans[8];
    cout<<"input array:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    //without stack brute force T.C=O(N^2) S.C=O(1)
    for(int i=0;i<n;i++){
        ans[i]=-1;
        for(int j=i-1;j>=0;j--){
            if(a[j]>a[i]){
                ans[i]=a[j];
                break;
            }
        }
    }

    //with stack optimized T.C=O(N) S.C=O(N)
    prevGreater(a,ans,n);

    cout<<"\nprevious greater element array:";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}