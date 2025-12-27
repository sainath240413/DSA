//revise leetcode....
#include<iostream>
using namespace std;
int main(){
    int a[10][10],n,m;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter no of coloumns:";
    cin>>m;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"elements of array in spiral form are:\n";
    int ele=n*m;
    int count=0;
    int minr=0,maxr=n-1,minc=0,maxc=m-1;
    while(count<ele){
        for(int i=minc;i<=maxc && count<ele;i++){
            cout<<a[minr][i]<<" ";
            count++;
        }
        minr++;
        for(int j=minr;j<=maxr && count<ele;j++){
            cout<<a[j][maxc]<<" ";
            count++;
        }
        maxc--;
        for(int k=maxc;k>=minc && count<ele;k--){
            cout<<a[maxr][k]<<" ";
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<ele;i--){
            cout<<a[i][minc]<<" ";
            count++;
        }
        minc++;
    }
}