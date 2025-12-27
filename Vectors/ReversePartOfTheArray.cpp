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
    cout<<"enter pos1:";
    cin>>pos1;
    cout<<"enter pos2:";
    cin>>pos2;
    reverse(pos1,pos2,v);
    cout<<"elements of the array after reversing:";
    display(v);
}