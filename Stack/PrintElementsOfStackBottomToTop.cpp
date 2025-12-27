#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    stack<int>temp;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"Elements in stack from top to bottom are:";
    while(!s.empty()){
        cout<<s.top()<<" ";
        temp.push(s.top());
        s.pop();
    }
    cout<<endl;
    cout<<"Elements in stack from bottom to top are:";
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        s.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}