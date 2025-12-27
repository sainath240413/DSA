#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int choice,key;
    cout<<"enter choice(1 to input and 0 to no input):";
    cin>>choice;
    while(choice){
        int x;
        cout<<"enter data:";
        cin>>x;
        v.push_back(x);
        cout<<"enter choice:";
        cin>>choice;
    }
    cout<<"elements of the vector are:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"enter key to find two sum:";
    cin>>key;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==key){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}