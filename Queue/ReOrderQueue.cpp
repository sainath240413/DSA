/*do it using one stack only...*/
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reorder(queue<int>&q){
    stack<int>s;
    int n=q.size();
    //pop the 1st half and push it into stack
    for(int i=0;i<n/2;i++){
        s.push(q.front());
        q.pop();
    }
    //pop the 1st half into queue from stack
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    //pop the 2nd half(now the first) and push it into stack
    for(int i=0;i<n/2;i++){
        s.push(q.front());
        q.pop();
    }
    //important:interleave one by one
    while(s.size()>0){
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
    //reverse the queue to get the final order
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}
void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    reorder(q);
    cout<<"Reordered queue: ";
    display(q);
}