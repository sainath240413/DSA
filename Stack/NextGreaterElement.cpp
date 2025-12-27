/*Problem Statement:
    arr: 3 1 2 5 4  6 2  3
    ans: 5 2 5 6 6 -1 3 -1
    answer is the array of next greater element to the respective index if there is no greater element in array
    then it's corresponding index in the answer array would be -1. 
*/
#include<iostream>
#include<stack>
using namespace std;
void NextGreater(int a[],int ans[],int n){
    stack<int>s;
    ans[n-1]=-1;
    s.push(a[n-1]);
    for(int i=n-2;i>=0;i--){
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
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                ans[i]=a[j];
                break;
            }
        }
    }

    //with stack optimized T.C=O(N) S.C=O(N)
    NextGreater(a,ans,n);

    cout<<"\nnext greater element array:";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}