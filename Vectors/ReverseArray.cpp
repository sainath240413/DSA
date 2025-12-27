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
        cout<<"enter choice:";
        cin>>choice;
    }
    vector<int>r(v.size());
    cout<<"vector before reversing\n";
    display(v);
    for(int i=0;i<r.size();i++){
        r[i]=v[v.size()-1-i];
    }
    cout<<"vector after reversing:\n";
    display(r);
}