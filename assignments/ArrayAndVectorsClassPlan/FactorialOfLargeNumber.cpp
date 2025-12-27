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
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}
void greatest(vector<int>&a){
    int max=a[0];
    for(int i=0;i<a.size();i++){
        if(max<a[i]) max=a[i];
    }
    factorial(max);
    return;
}
int main(){
    vector<int>v;
    create(v);
    cout<<"elements of the array are:";
    display(v);
    greatest(v);
}