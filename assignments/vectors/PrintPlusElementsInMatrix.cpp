//like pattern printing...
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void create(vector<vector<int>>&a,int n){
    for(int i=0;i<n;i++){
        vector<int>s(n);
        a.push_back(s);
    }
    cout<<"enter elements of the matrix:";
    for(int i=0;i<n;i++){
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
void mid(vector<vector<int>>&a){
    int n=a.size();
    int midrow=n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==midrow || j==midrow) cout<<a[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter no of rows:";
    cin>>n;
    vector<vector<int>>v;
    create(v,n);
    cout<<"elements of matrix are:";
    display(v);
    mid(v);
}