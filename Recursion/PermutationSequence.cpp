//leetcode 60(hard)...
//revise...
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//time limit exceeded...
void permutationsequence(vector<string>&v,string res,string str){
    if(str==""){
        v.push_back(res);
        return;
    }
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        permutationsequence(v,res+ch,left+right);
    }
}
int main(){
    int n,k;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter k:";
    cin>>k;
    string str="";
    for(int i=1;i<=n;i++){
        str+=to_string(i);
    }
    vector<string>v;
    permutationsequence(v,"",str);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}


//optimised
string permutationseq(string str,int k,string ans){
    int n=str.length();
    if(n==0) return ans; 
    int fact=1;
    for(int i=2;i<=n-1;i++) fact*=i;
    int idx=k/fact;
    if(k%fact==0) idx--;
    char ch=str[idx];
    string left=str.substr(0,idx);
    string right=str.substr(idx+1);
    int a=1;
    if(k%fact==0) a=fact;
    else a=k%fact;
    return permutationseq(left+right,a,ans+ch);
}
int main(){
    int n,k;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter k:";
    cin>>k;
    string str="";
    string ans="";
    for(int i=1;i<=n;i++) str+=to_string(i);
    cout<<permutationseq(str,k,"");
}