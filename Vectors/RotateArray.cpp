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
void reverse(int x,int y,vector<int>&a){
    while(x<=y){           
        int temp=a[x];
        a[x]=a[y];
        a[y]=temp;
        x++;
        y--;           
    }
} 
int main(){
    vector<int>v;
    int choice,pos1,pos2;
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
    cout<<"elements of the array before reversing:";
    display(v);
    int k;
    cout<<"enter no of rotations:";
    cin>>k;
    if(k>v.size()){
        k=k%v.size();
    }
    reverse(0,v.size()-1-k,v);
    reverse(v.size()-k,v.size()-1,v);
    reverse(0,v.size()-1,v);
    cout<<"elements of the array after"<<k<<"rotations:";
    display(v);
    
    /* important conditions:
    if k=v.size() then array will be same 
    if k<v.size() then reqquired rotations will be done
    if k>v.size() then k=k%v.size() 
    */
}