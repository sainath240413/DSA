#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*numbers are given as strings and return the largest number*/
int main(){
    vector<string>v;
    int choice=1;
    while(choice){
        cout<<"enter number string:";
        string s;
        cin.ignore();
        getline(cin,s);
        v.push_back(s);
        cout<<"enter choice:";
        cin>>choice;
    }
    int n=v.size();
    vector<int>a(n);
    for(int i=0;i<n;i++){
        a[i]=stoi(v[i]);
    }
    int greatest=a[0];
    int index=0;
    for(int i=0;i<n;i++){
        if(greatest<a[i]){ 
            greatest=a[i];
            index=i;
        }
    }
    cout<<greatest<<" is the greatest with index "<<index;
}