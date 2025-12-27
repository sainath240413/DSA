#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isvalid(string s){
    if(s.size()%2!=0) return false;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || st.size()==0){
            st.push('(');
        }
        else{
            //if(st.size()==0) return false;
            if(st.top()=='(') st.pop();
            else{
                st.push(')');
            }
        }
    }
    if(st.empty()) return true;
    else return false; 
}
int main(){
    string s;
    cout<<"enter string:";
    cin>>s;
    cout<<isvalid(s);
}