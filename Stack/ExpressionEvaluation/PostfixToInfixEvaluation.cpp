#include<iostream>
#include<stack> 
#include<string>
using namespace std;
string solve(string val1,string val2,char ch){
    string s="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s; //infix expression
}
int main(){
    string s; //postfix expression
    cout<<"enter the postfix expression:";
    cin>>s;
    stack<string>val; //stack for operands
    int n=s.size();
    for(int i=0;i<n;i++){
        if(isdigit((s[i]))) val.push(to_string(s[i]-'0'));
        else{
            char ch=s[i];
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string ans=solve(val1,val2,ch);
            val.push(ans);
        }
    }
    cout<<"The evaluated result of the expression is:"<<val.top()<<endl;
}