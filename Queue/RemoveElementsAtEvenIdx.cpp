//consider 0 based indexing
#include<iostream>
#include<queue>
using namespace std;
void RemoveAtEvenIdx(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==0) q.pop();
        else{
            int x=q.front();
            q.pop();
            q.push(x);
        }
    }
}
void display(queue<int>&q){
    cout<<"elements in queue are:";
    for(int i=1;i<=q.size();i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x); 
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    RemoveAtEvenIdx(q);
    display(q);
}