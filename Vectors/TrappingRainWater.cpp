//leet code revise....
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
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
void trap(vector<int>&a){
    int n=a.size();
    //previous gratest
    int prevg[n];
    prevg[0]=-1;
    int max=a[0];
    for(int i=1;i<n;i++){
        prevg[i]=max;
        if(max<a[i]) max=a[i];
    }
    //next greatest 
    int nextg[n];
    nextg[n-1]=-1;
    max=a[n-1];
    for(int i=n-2;i>=0;i--){
        nextg[i]=max;
        if(max<a[i]) max=a[i];
    }
    //minimum of nextgreatest and previousgreatest 
    int mini[n];
    for(int i=0;i<n;i++){
        mini[i]=min(prevg[i],nextg[i]);
    }
    //finding capacity of water trapped
    int capacity=0;
    for(int i=1;i<n-1;i++){
        if(a[i]<mini[i]){
            capacity+=mini[i]-a[i];
        }
    }
    cout<<capacity;
    return;
}
int main(){
    vector<int>v;
    create(v);
    cout<<"elements of the vector are:";
    display(v);
    cout<<"units of water trapped is:";
    trap(v);
}