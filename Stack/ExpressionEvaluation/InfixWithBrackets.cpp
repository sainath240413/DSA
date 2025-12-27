/*infix expression is given in the form of a string and it is evaluated to return the result.and the operators 
are +,-,*,/ and the operands are integers.we use 2 stacks,one for operands and one for operators.the precedence
of operators is taken into account and the expression is evaluated accordingly.
Rules(with brackets):
1. If the s[i] is a digit, push it onto the operand stack.
2. If the s[i] is an operator
->if operator stack is empty push it onto the operator stack.
->if operator stack is not empty,check the precedence of the operator at the top priority(s.top()) < priority(s[i]).
    if it is true, push the operator onto the operator stack.
    priority(s.top()) >= priority(s[i]) then pop the operator from stack and pop 2 operends(values) from the 
    operends stack and evaluate the expression and push the result onto the operends stack.
->if the s[i] is a left bracket '(', push it onto the operator stack.
->if the s[i] is a right bracket ')', pop the operator from the operator stack until a left bracket is found.
    then pop the left bracket from the operator stack.
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
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else if(ch=='/') return val1/val2;
    return 0; //for any other character
}
int main(){
    string s;//infix expression
    cout<<"enter the infix expression:";
    cin>>s;
    stack<int>val; //stack for operands
    stack<char>op; //stack for operators
    int n=s.size();
    for(int i=0;i<n;i++){
        //check if the character is a digit
        if(isdigit(s[i])){
            val.push(s[i]-'0'); //convert char to int and push onto the operand stack
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
                    int val2=val.top(); //pop the top value from the operand stack
                    val.pop(); //pop the value from the operand stack
                    int val1=val.top(); //pop the next value from the operand stack
                    val.pop(); //pop the value from the operand stack
                    int ans=solve(val1, val2, ch); //evaluate the expression with the operator
                    val.push(ans); //push the result onto the operand stack
                } 
                op.pop(); //pop the left bracket from the operator stack
            }
            else if(priority(op.top()) < priority(s[i])) op.push(s[i]);
            else{//priority(op.top()) >= priority(s[i])
                while(op.size()>0 && priority(op.top()) >= priority(s[i])){
                    char ch=op.top(); //get the operator at the top of the operator stack
                    op.pop(); //pop the operator from the operator stack
                    int val2=val.top(); //pop the top value from the operand stack
                    val.pop(); //pop the value from the operand stack
                    int val1=val.top(); //pop the next value from the operand stack
                    val.pop(); //pop the value from the operand stack
                    int ans=solve(val1, val2, ch); //evaluate the expression with the operator
                    val.push(ans); //push the result onto the operand stack
                }
                op.push(s[i]); //push the operator onto the operator stack
            }
        }
    }
    while(op.size()>0){
        char ch=op.top();
        op.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<"The evaluated result of the expression is:"<<val.top()<<endl;
}
