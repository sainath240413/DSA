#include<iostream>
#include<stack>
#include<string>
#include<cmath>
using namespace std;
string solve(string val1,string val2,char ch){
    return val1+val2+ch; //postfix expression
}
int main(){
    string s="-/*+79483";//prefix expression
    // cout<<"enter the prefix expression:";
    // cin>>s;
    stack<string>val; //stack for operands
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        if(isdigit((s[i]))) val.push(to_string(s[i]-'0'));
        else{
            char ch=s[i];
            string val1=val.top();
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=solve(val1,val2,ch);
            val.push(ans);
        }
    }
    cout<<"The evaluated result of the expression is:"<<val.top()<<endl;
}