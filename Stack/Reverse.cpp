#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void print(stack<int>s){ //pass by value
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void display(stack<int>&s){//pass by reference while using recursion
    if(s.size()==0) return;
    int x=s.top();
    s.pop();
    display(s);
    cout<<x<<" ";
    s.push(x);
}
void PushAtBottom(stack<int>&s,int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int x=s.top();
    s.pop();
    PushAtBottom(s,val);
    s.push(x);
}
void reverse(stack<int>&s){
    if(s.size()==1) return;
    int x=s.top();
    s.pop();
    reverse(s);
    PushAtBottom(s,x);
}
int main(){
    stack<int>s;
    stack<int>temp;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    //reverse the elements of stack in the same stack
    //so it can be done using two extra stacks
    stack<int>temp2;
    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }
    while(!temp.empty()){
        temp2.push(temp.top());
        temp.pop();
    }
    while(!temp2.empty()){
        s.push(temp2.top());
        temp2.pop();
    }

    //using extra vector or array
    vector<int>v;
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    for(int i=0;i<v.size();i++) s.push(v[i]);

    //using recursion
    display(s);
    cout<<endl;
    reverse(s);
    display(s);
}