#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void create(vector<vector<int>>&a,int n,int m){
    for(int i=0;i<n;i++){
        vector<int>s(m);
        a.push_back(s);
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}
void display(vector<vector<int>>&a){
    cout<<"enter elements of the matrix:";
    int n=a.size();
    int m=a[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void wave(vector<vector<int>>&a){
    int n=a.size();
    int m=a[0].size();
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=n-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j=0;j<n;j++){
                cout<<a[j][i]<<" ";
            }
        }
    }
}
int main(){
    vector<vector<int>>v;
    int n,m;
    cout<<"enter the order of the matrix:";
    cin>>n>>m;
    create(v,n,m);
    cout<<"elements of the matrix are:";
    display(v);
    cout<<"matrix in waveform is:";
    wave(v);
}