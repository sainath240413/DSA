#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    getline(cin,s);
    cout<<s<<endl;
    int n=s.size();
    /*without using sort function*/
    string mx="",word="";
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            mx=max(mx,word);
            word=" ";
        }
        else word=word+s[i];
    }
    mx=max(mx,word);
    cout<<mx<<endl;
    
    /*using sort function*/
    vector<string>v;
    string word="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            word=word+s[i];
        }
        else{
            v.push_back(word);
            word="";
        }
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;
}