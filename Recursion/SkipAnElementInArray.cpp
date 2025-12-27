#include<iostream>
#include<vector>
using namespace std;
void skipelement(vector<int>&a,vector<int>&b,int n,int skip){
    if(n<0) return;
    if(a[n]!=skip) {
        b.push_back(a[n]);
    }
    skipelement(a,b,n-1,skip);
    return;
}
void display(vector<int>&b){
    int n=b.size();
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}
int main(){
    vector<int>a;
    vector<int>b;
    int choice=1;
    while(choice){
        int x;
        cout<<"enter element:";
        cin>>x;
        a.push_back(x);
        cout<<"enter choice:";
        cin>>choice;
    }
    int n=a.size(),skip;
    cout<<"enter element to skip:";
    cin>>skip;
    skipelement(a,b,n-1,skip);
    display(b);
}