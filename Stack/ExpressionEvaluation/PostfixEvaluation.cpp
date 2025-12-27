/*evaluating the postfix expression we need one stack
 1. if the character is a digit, push it onto the operand stack.
 2. if the character is an operator, pop the top two values from the operand stack, evaluate the expression 
 with the operator, and push the result back onto the operand stack.
 3. if the character is a left bracket, push it onto the operator stack.
 4. if the character is a right bracket, pop the operator stack until you find the left bracket and pop the 
 left bracket from the operator stack.
 5. after the loop ends, pop all the operators from the operator stack and evaluate the expression
 6. the result will be in the operand stack.
*/
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
    string s; //postfix expression
    cout<<"enter the postfix expression:";
    cin>>s;
    stack<int>val; //stack for operands
    int n=s.size();
    for(int i=0;i<n;i++){
        if(isdigit(s[i])) val.push(s[i]-'0');
        else{
            char ch=s[i];
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            int ans=solve(val1,val2,ch);
            val.push(ans);
        }
    }
    cout<<"The evaluated result of the expression is:"<<val.top()<<endl;
}