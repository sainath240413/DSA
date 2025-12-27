#include<iostream>
#include<stack> 
#include<string>
#include<algorithm> 
using namespace std;
string solve(string val1,string val2,char ch){
    string s="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s; //infix expression
}
int main(){
    string s="*+3-54/62"; //prefix expression
    // cout<<"enter the prefix expression:";
    // cin>>s;
    stack<string>val; //stack for operands
    int n=s.size();
    for(int i=n-1;i>=0;i--){
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
    string result = val.top();
    reverse(result.begin(), result.end()); // Reverse the result to get the correct infix expression
    cout<<"The evaluated result of the expression is:"<<result<<endl;
}