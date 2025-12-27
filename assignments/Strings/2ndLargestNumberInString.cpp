#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    getline(cin,s);
    cout<<s<<endl;
    int x[10];
    for(int i=0;i<s.size();i++){
        x[i]=int(s[i]);
    }
    int max=x[0];
    for(int i=0;i<s.size();i++){
        if(max<x[i]) max=x[i];
    }
    int smax=x[0];
    for(int i=0;i<s.size();i++){
        if(smax<x[i] && x[i]!=max) smax=x[i];
    }
    cout<<smax-'0'<<endl; /*subtracting ascii value of zero to get smax*/
}