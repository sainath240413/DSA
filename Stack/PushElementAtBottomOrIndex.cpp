#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void InsertAtIdx(stack<int>&s,int val,int idx){
    stack<int>temp;
    int n=s.size()-idx;
    for(int i=0;i<n;i++){
        temp.push(s.top());
        s.pop();
    }
    s.push(val);
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int idx,val;
    cout<<"enter index to insert element:";
    cin>>idx;
    cout<<"enter element to insert:";
    cin>>val;
    InsertAtIdx(s,val,idx);
    display(s);
}