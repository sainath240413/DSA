#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    for(int i=1;i<=q.size();i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop(); 
        q.push(x); 
    }
    cout<<endl;
}
void reverserec(queue<int>&q){//using recursion
    if(q.empty()) return;
    int x=q.front();
    q.pop();
    reverserec(q);
    q.push(x);
}
void reverse(queue<int>&q){
    //using extra stack
    stack<int>s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"normal queue:";
    display(q);
    cout<<"reverse queue:";
    // reverserec(q);//using recursion
    // display(q);
    reverse(q);//using extra stack
    cout<<"reverse queue using extra stack:";
    display(q);
}