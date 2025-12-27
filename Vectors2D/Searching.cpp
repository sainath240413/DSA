//half leetcode...
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
void print(vector<vector<int>>&a){
    int n=a.size();
    int m=a[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void search(vector<vector<int>>&a){
    int n=a.size();
    int m=a[0].size();
    int key,flag=0;
    cout<<"enter key to search:";
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==key){ 
                flag=1;
                break;
            }
        }
    }
    /*if we have sorted numbers according to row and coloumn also sorted 
    according to the coloumn then */
    int i=0,j=m-1;//leetcode....
    while(i<n && j>=0){
        if(a[i][j]==key) flag=1;
        else if(a[i][j]>key) j--;
        else i++; 
    }
    if(flag==1) cout<<"key found";
    else cout<<"key not found";
}
int main(){
    int n,m;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter no of coloumns:";
    cin>>m;
    vector<vector<int>>v;
    create(v,n,m);
    cout<<"elements of the matrix are:";
    print(v);
    search(v);
    
    
}