/*Queue follow the FIFO (First In First Out) principle.
 this is opposite of Stack.
 In Queue, the first element added is the first one to be removed.
    In this example, we will implement a basic Queue using C++ STL.
    ther are two main operations:
    1. Enqueue: Add an element to the end of the queue.
    2. Dequeue: Remove an element from the front of the queue.
    We will use std::queue from the C++ Standard Library.
*/
#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>&q){
    cout<<"elements in queue are:";
    for(int i=1;i<=q.size();i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop(); // Dequeue the front element
        q.push(x);
    }
}
int main(){
    queue<int>q;
    /*push-> add element to queue
    pop-> remove element from queue
    front->access the front element/top of the queue
    back-> access the last element of the queue
    size,empty*/
    q.push(10); // Enqueue 10
    q.push(20); 
    q.push(30); 
    q.push(40);
    cout<<"front element:"<<q.front()<<endl; 
    cout<<"back element:"<<q.back()<<endl;
    q.pop(); // Dequeue the front element (10)
    q.push(50); // Enqueue 50
    cout<<"back element:"<<q.back()<<endl;
    cout<<"front element:"<<q.front()<<endl;
    display(q);
}