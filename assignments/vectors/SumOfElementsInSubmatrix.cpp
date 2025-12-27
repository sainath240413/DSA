/*Q2. Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) 
and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void create(vector<vector<int>>&a,int n,int m){
    for(int i=0;i<m;i++){
        vector<int>s(n);
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
    int r1,r2,c1,c2;
    cout<<"enter row boundries of submatrix:";
    cin>>r1>>c1;
    cout<<"enter coloumn boundries of submatrix:";
    cin>>r2>>c2;
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
            sum+=a[i][j];
        } 
    }
    cout<<sum;
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
    cout<<"sum of elements of submatrix are:";
    sum(v);
}