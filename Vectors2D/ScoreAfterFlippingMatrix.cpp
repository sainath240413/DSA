//leetcode revise and recheck it is not executing in vscode...
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> create(vector<vector<int>>&a,int n,int m){
    for(int i=0;i<n;i++){
        vector<int>s(m);
        a.push_back(s);
    }
    cout<<"enter elements of matrix either 0 or 1:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    return a;
}
void display(vector<vector<int>>&a,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int flip(vector<vector<int>>&a){
    int n=a.size();
    int m=a[0].size();
    for(int i=0;i<n;i++){
        if(a[i][0]==0){//flip
            for(int j=0;j<m;j++){
                a[i][j]=1-a[i][j];
            }
        }
    }
    //flip coloumns
    
    for(int i=0;i<m;i++){
        int noz=0,noo=0;
        for(int j=0;j<n;j++){
            if(a[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
            for(int j=0;j<n;j++){
                a[j][i]=1-a[j][i];
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=m-1;j>=0;j--){
            sum+=a[i][j]*x;
            x*=2;
        }
    }
    return sum;
}
int main(){
    int n,m;
    cout<<"enter no of rows in the vector:";
    cin>>n;
    cout<<"enter no of coloumns in the vector:";
    cin>>m;
    vector<vector<int>>v;
    create(v,n,m);
    cout<<"elements of the matrix are:";
    display(v,n,m);
    flip(v);
}