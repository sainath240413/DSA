#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void reversek(queue<int>&q,int k){
    stack<int>s;
    for(int i=0;i<k;i++){
        if(!q.empty()){
            s.push(q.front());
            q.pop();
        }
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<q.size()-k;i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int k;
    cout<<"enter k elements to reverse: ";
    cin>>k;
    cout<<"Queue elements:";
    display(q);
    reversek(q,k);
    display(q);
}