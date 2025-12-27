/*Leetcode 20...
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']',determine if the input string 
is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 
Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([])"
Output: true

Example 5:
Input: s = "([)]"
Output: false*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isvalid(string s){
    if(s.size()%2!=0) return false;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.size()==0) return false;
            if((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[')){
                st.pop();
            } 
            else return false;
        }
    }
    return st.empty();
}
int main(){
    string s;
    cout<<"enter string:";
    cin>>s;
    cout<<isvalid(s);
}