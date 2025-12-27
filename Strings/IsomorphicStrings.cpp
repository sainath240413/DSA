//leetcode revise...
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cout<<"enter string1:";
    getline(cin,s);
    cout<<"enter string2:";
    getline(cin,t);
    int n=s.size();
    if(s.size()!=t.size()){
        cout<<s<<" and "<<t<<" are not isomorphic strings";
        return 0;
    }   
    //checking from string1 pov 
    vector<int>a(150,1000);
    for(int i=0;i<n;i++){
        int idx=(int)s[i];
        if(a[idx]==1000){ 
            a[idx]=s[i]-t[i];
        }
        else if(a[idx]!=(s[i]-t[i])){
            cout<<s<<" and "<<t<<" are not isomorphic strings";
            return 0;
        }
    }
    //emptying the vector to check from string2 pov
    for(int i=0;i<150;i++){
        a[i]=1000;
    }
    for(int i=0;i<n;i++){
        int idx=(int)t[i];
        if(a[idx]==1000){
            a[idx]=t[i]-s[i];
        }
        else if(a[idx]!=(t[i]-s[i])){
            cout<<s<<" and "<<t<<" are not isomorphic strings";
            return 0;
        }
    }
    cout<<s<<" and "<<t<<" are isomorphic strings";  
}