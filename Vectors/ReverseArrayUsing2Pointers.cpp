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
    cout<<"elements of the array before reversing:";
    display(v);
    /*without using inbuilt function*/
    int j=v.size()-1;
    for(int i=0;i<v.size();i++){
        if(i<j){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            j--;
        }
    }
    /*with using inbuilt function*/
    reverse(v. begin(),v. end());
    cout<<"elements of the array after reversing:";
    display(v);
}