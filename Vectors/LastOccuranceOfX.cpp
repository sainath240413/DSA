#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int choice,pos=-1,ele;
    cout<<"enter choice '1 for giving input and 0 for no input':";
    cin>>choice;
    while(choice){
        int x;
        cout<<"enter data:";
        cin>>x;
        v.push_back(x);
        cout<<"enter choice:";
        cin>>choice;
    }
    cout<<"elements in the vector are:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"enter the element to search:";
    cin>>ele;
    /*normal way traversing vector in order*/
    for(int i=0;i<v.size();i++){
        if(v[i]==ele){
            pos=i+1;
        }
    }
    cout<<pos;

    /*most efficient way traversing vector in reverse order*/
    for(int i=v.size();i>=0;i--){
        if(v[i]==ele){
            pos=i+1;
            break;
        }
    }
    cout<<pos;
}