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
void printdiagonal(vector<vector<int>>&a){
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                cout<<a[i][j]<<" ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>>v;
    int n;
    cout<<"enter no of rows:";
    cin>>n;
    create(v,n);
    cout<<"elements of the matrix are:";
    display(v);
    cout<<"diagonals of sqquare matrix is:\n";
    printdiagonal(v);
}