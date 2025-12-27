#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    getline(cin,s);
    cout<<s<<endl;
    // int x=stoi(s);/*using inbuilt function*/
    int n=s.size();
    /*without using inbuilt function*/
    int num=0;
    for(int i=0;i<n;i++){
        num=num*10+s[i]-'0';
    }
    cout<<num<<endl;
}