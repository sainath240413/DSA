//complete it update function was wrong..
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void create(vector<vector<int>>&a,int n,int m){
    cout<<"enter elements of the matrix:";
    for(int i=0;i<n;i++){
        vector<int>s(m);
        a.push_back(s);
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}
void display(vector<vector<int>>&a){
    int n=a.size();
    int m=a[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void update(vector<vector<int>>&a){
    int m=a.size();
    int n=a[0].size();
    bool firstrow=false,firstcol=false;
    //rows
    for(int i=0;i<n;i++){
        if(a[0][i]==0){
            firstrow=true;
            break;
        }
    }
    //coloumns
    for(int i=0;i<m;i++){
        if(a[i][0]==0){
            firstcol=true;
            break;
        }
    }
    //marking the index
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(a[i][j]==0){
                a[i][0]=0;
                a[0][j]=0;
            }
        }
    }
    //updating the values
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(a[i][0]==0 || a[0][j]==0){
                a[i][j]=0;
            }
        }
    }
    //handeling rows
    if(firstrow){
        for(int i=0;i<n;i++){
            a[0][i]=0;
        }
    }
    //handeling coloumns
    if(firstcol){
        for(int i=0;i<m;i++){
            a[i][0]=0;
        }
    }
}
int main(){
    int n,m;
    vector<vector<int>>v;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter no of coloumns:";
    cin>>m;
    create(v,n,m);
    cout<<"elements of the matrix are:";
    display(v);
    update(v);
    cout<<"elements of the matrix after updating are:";
    display(v);
}