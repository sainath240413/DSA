#include<iostream>
#include<stack>
#include<string>
using namespace std;
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else if(ch=='/') return val1/val2;
    return 0; //for any other character
}
int main(){
    string s; //prefix expression
    cout<<"enter the postfix expression:";
    cin>>s;
    stack<int>val; //stack for operands
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        if(isdigit(s[i])) val.push(s[i]-'0');
        else{
            char ch=s[i];
            int val1=val.top();
            val.pop();
            int val2=val.top();
            val.pop();
            int ans=solve(val1,val2,ch);
            val.push(ans);
        }
    }
    cout<<"The evaluated result of the expression is:"<<val.top()<<endl;
}