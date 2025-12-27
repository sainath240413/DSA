#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
} 
void sort01(vector<int>&a){
    int no0=0,no1=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0) no0++;
        if(a[i]==1) no1++;
    }
    for(int i=0;i<a.size();i++){
        if(i<no0) a[i]=0;
        else a[i]=1;
    }
}
int main(){
    vector<int>v;
    int choice;
    cout<<"enter choice:";
    cin>>choice;
    while(choice){
        int x;
        cout<<"enter data:";
        cin>>x;
        v.push_back(x);
        cout<<"enetr choice:";
        cin>>choice;
    }
    cout<<"elements of the array before sorting:";
    display(v);
    cout<<"elements of the array after sorting:";
    sort01(v);
    display(v);
}