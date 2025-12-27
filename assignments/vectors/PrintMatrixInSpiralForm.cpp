#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void create(vector<vector<int>>&a,int n){
    cout<<"enter elements of the matrix:";
    for(int i=0;i<n;i++){
        vector<int>s(n);
        a.push_back(s);
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
}
void display(vector<vector<int>>&a){
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void spiral(vector<vector<int>>&a){
    int n=a.size(),noe=n*n;
    int minr=0,minc=0,maxr=n-1,maxc=n-1,count=0;
    while(count<noe){
        for(int i=minc;i<=maxc && count<noe;i++){
            cout<<a[minr][i]<<" ";
            count++;
        }
        minr++;
        for(int j=minr;j<=maxr && count<noe;j++){
            cout<<a[j][maxc]<<" ";
            count++;
        }
        maxc--;
        for(int k=maxc;k>=minc && count<noe;k--){
            cout<<a[maxr][k]<<" ";
            count++;
        }
        maxr--;
        for(int l=maxr;l>=minr && count<noe;l--){
            cout<<a[l][minc]<<" ";
            count++;
        }
        minc++;
    }
}
int main(){
    int n;
    cout<<"enter order of the matrix:";
    cin>>n;
    vector<vector<int>>v;
    create(v,n);
    cout<<"elements of the matrix are:";
    display(v);
    cout<<"elements of the matrix in spiral form are:";
    spiral(v);
}