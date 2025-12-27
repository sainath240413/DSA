#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int>a){ //pass by value
    a[1]=10;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void change1(vector<int>&a){ //pass by reference
    a[1]=10;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    vector<int>v;
    int choice=1,x;
    while(choice!=0){
        cout<<"enter choice:";
        cin>>choice;
        if(choice!=0){
            cout<<"enter data:";
            cin>>x;
            v.push_back(x);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    change(v);
    change1(v);
}
