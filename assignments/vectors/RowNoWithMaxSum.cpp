#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void create(vector<vector<int>>&a,int n,int m){
    for(int i=0;i<n;i++){
        vector<int>s(m);
        a.push_back(s);
    }
    cout<<"enter elements of the matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}
void display(vector<vector<int>>&a){
    int n=a.size(),m=a[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void sum(vector<vector<int>>&a){
    int sum=0;
    int n=a.size(),m=a[0].size();
    int maxsumrow=0;
    for(int i=0;i<n;i++){
        int rowsum=0;
        for(int j=0;j<m;j++){
            rowsum+=a[i][j];
        }
        if(rowsum>sum){
            sum=rowsum;
            maxsumrow=i;
        }
    }
    cout<<maxsumrow;
}
int main(){
    int n,m;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter no of coloumns:";
    cin>>m;
    vector<vector<int>>v;
    create(v,n,m);
    cout<<"elements of matrix are:";
    display(v);
    sum(v);
}