/*prefix expression :op,val1,val2
infix expression :val1,op,val2
to convert infix to prefix we need to use 2 stacks
*/
#include<iostream>
#include<stack>
#include<string>
#include<cmath>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/') return 2;
    return 0; //for any other character
}
string solve(string val1,string val2,char ch){
    return ch+val1+val2; //prefix expression
}
int main(){
    string s;//infix expression
    cout<<"enter the infix expression:";
    cin>>s;
    stack<string>val; //stack for operands
    stack<char>op; //stack for operators
    int n=s.size();
    for(int i=0;i<n;i++){
        //check if the character is a digit
        if(isdigit(s[i])){
            val.push(to_string(s[i]-'0')); //convert char to int and push onto the operand stack
        }
        else{
            //if operator stack is empty or precedence of operator condition below is true then,push the operator into op stack
            if(op.empty()) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]); //push the left bracket into the operator stack 
            else if(op.top()=='(') op.push(s[i]); //if the top of operator stack is a left bracket, push the operator onto the operator stack
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch=op.top(); //get the operator at the top of the operator stack
                    op.pop(); //pop the operator from the operator stack
                    string val2=val.top(); //pop the top value from the operand stack
                    val.pop(); //pop the value from the operand stack
                    string val1=val.top(); //pop the next value from the operand stack
                    val.pop(); //pop the value from the operand stack
                    string ans=solve(val1, val2, ch); //evaluate the expression with the operator
                    val.push(ans); //push the result onto the operand stack
                } 
                op.pop(); //pop the left bracket from the operator stack
            }
            else if(priority(op.top()) < priority(s[i])) op.push(s[i]);
            else{//priority(op.top()) >= priority(s[i])
                while(op.size()>0 && priority(op.top()) >= priority(s[i])){
                    char ch=op.top(); //get the operator at the top of the operator stack
                    op.pop(); //pop the operator from the operator stack
                    string val2=val.top(); //pop the top value from the operand stack
                    val.pop(); //pop the value from the operand stack
                    string val1=val.top(); //pop the next value from the operand stack
                    val.pop(); //pop the value from the operand stack
                    string ans=solve(val1, val2, ch); //evaluate the expression with the operator
                    val.push(ans); //push the result onto the operand stack
                }
                op.push(s[i]); //push the operator onto the operator stack
            }
        }
    }
    while(op.size()>0){
        char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<"The evaluated result of the expression is:"<<val.top()<<endl;
}