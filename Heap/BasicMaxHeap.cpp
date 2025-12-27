#include<iostream>
#include<queue>
using namespace std;
int main(){
    /*priority queue is just like stack but the top of the preority quue is always the gratest elemnet in the 
    queue as preority queue will form max heap inside it.all the operations will be same as stack
    */
   /*there are 2 types of heaps they are:
   1)max heap:it is like a stack but it's top element is always the max value in that heap
        we use priority queue for max heap it's initialization / decleration is ""priority_queue<int>pq""
   2)min heap:it is like a stack but it's top element is always the min value in that heap
        we use priority queue for min heap it's initialization / decleration is 
        ""priority_queue< int , vector<int> , greater<int> >pq""
   */
    // priority_queue<int>pq;// max heap
    // pq.push(10);
    // pq.push(-1);
    // pq.push(20);
    // pq.push(1);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;

    priority_queue< int , vector<int> , greater<int> >pq; //min heap
    pq.push(10);
    pq.push(-1);
    pq.push(100);
    cout<<pq.top()<<" ";
    pq.pop();
    cout<<pq.top()<<" ";
}