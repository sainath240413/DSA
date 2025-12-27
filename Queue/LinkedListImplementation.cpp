/*advantages of linked list implementation of queue:
1.Dynamic size: Unlike arrays, linked lists can grow and shrink dynamically, allowing for efficient memory
2.No wasted space: Linked lists do not have a fixed size, so there is no wasted space when elements are removed.
3.Efficient insertions and deletions: Inserting or deleting elements at the front or back of a linked list is 
efficient, as it only requires updating pointers without shifting elements.
Disadvantages of linked list implementation of queue:
1.Memory overhead:Each element in a linked list requires additional memory for the pointer,which can lead to
increased memory usage compared to arrays.
2.Cache locality:Linked lists may have poor cache locality compared to arrays,as elements are not stored
contiguously in memory, which can lead to slower access times.
*/
#include<iostream>
using namespace std;
class node{//user defined datatype
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class queue{
    public:
    node* head;
    node* tail;
    int size;
    queue(){
        head=tail=NULL;
        size=0;
    }
    void push(int val){
        node* temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"queue is empty!";
            return;
        }
        if(size==1) {
            head=tail=NULL;
            size--;
        }
        else{
            head=head->next;
            size--;
        }
    }
    int front(){
        if(size==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return tail->val;
    }
    int getSize(){
        return size;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.display();
    cout<<"front element: "<<q.front()<<endl;
    cout<<"back element: "<<q.back()<<endl;
    q.pop();
    q.display();
    cout<<"size of queue: "<<q.getSize()<<endl;
}