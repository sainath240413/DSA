#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void create(vector<int>&a){
    int choice;
    while(choice){
        int x;
        cout<<"enter data:";
        cin>>x;
        a.push_back(x);
        cout<<"enter choice:";
        cin>>choice;
    }
}
void create2D(vector<int>&a,vector<int>&b,vector<vector<int>>&v){
    v.push_back(a);
    v.push_back(b);
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
int main(){
    vector<vector<int>>v;
    vector<int>v1;
    vector<int>v2;
    cout<<"create vector1:";
    create(v1);
    cout<<"create vector2:";
    create(v2);
    cout<<"create 2D vector using v1 and v2:";
    create2D(v1,v2,v);
    cout<<"elemnets in the vector are:";
    display(v);
}