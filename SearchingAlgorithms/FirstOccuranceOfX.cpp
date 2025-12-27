#include<iostream>
#include<vector>
using namespace std;
void create(vector<int>&v,int choice){
    while(choice){
        int x;
        cout<<"enter data:";
        cin>>x;
        v.push_back(x);
        cout<<"enter choice:";
        cin>>choice;
    }
}
void firstoccurance(vector<int>v,int x){
    //brute force
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            cout<<x<<" is first occured at index "<<i;
            break;
        }
    }
}
int firstoccurance1(vector<int>v,int x){
    int low=0,high=v.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(x==v[mid]){
            if(v[mid-1]!=x){
                cout<<mid; 
                break;
            }
            else high=mid-1;
        }
        else if(v[mid]>x) high=mid-1;
        else if(v[mid]<x) low=mid+1;
    }
}
int main(){
    vector<int>v;
    int x;
    cout<<"enter x:";
    cin>>x;
    create(v,1);
    firstoccurance(v,x);
}