#include<iostream>
using namespace std;
//using loops
void linearsearch(int a[],int target,int n){
    //time complexity=O(n)
    for(int i=0;i<n;i++){
        if(a[i]==target){
            cout<<target<<" found at index "<<i;
            break;
        }
    }
}
//using recursion
void linearsearch(int a[],int target,int n,int i){
    //time complexity=O(2*n)~=O(n)
    if(i==n) return;
    if(a[i]==target){
        cout<<target<<" found at index "<<i;
        return;
    }
    linearsearch(a,target,n,i+1);
}
int main(){
    int a[10],target,n;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"enter target:";
    cin>>target;
    //linearsearch(a,target,n);
    linearsearch(a,target,n-1,0);
}