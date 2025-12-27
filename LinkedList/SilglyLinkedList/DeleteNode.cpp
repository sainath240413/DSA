/*leetcode...

There is a singly-linked list head and we want to delete a node node in it.
You are given the node to be deleted node. You will not be given access to the first node of head.
All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node
in the linked list.
Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:
The value of the given node should not exist in the linked list.
The number of nodes in the linked list should decrease by one.
All the values before node should be in the same order.
All the values after node should be in the same order.

Custom testing:
For the input, you should provide the entire linked list head and the node to be given node. node should not be
the last node of the list and should be an actual node in the list.
We will build the linked list and pass the node to your function.
The output will be the entire list after calling your function.

Example 1:
Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling
your function.

Example 2:
Input: head = [4,5,1,9], node = 1
Output: [4,5,9]
Explanation: You are given the third node with value 1, the linked list should become 4 -> 5 -> 9 after calling your function.*/
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
    //leetcode....
    void deleteNode(node* target){//when there is no access to head pointer
        target->val=target->next->val;
        target->next=target->next->next;
        return;
    }
};
void display(node* temp){
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void deletenode(node* head,node* target){
    if(head==target){
        head=head->next;
        return;
    }
    node* temp=head;
    while(temp->next->val!=target->val){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
int main(){
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    node* e=new node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    deletenode(a,d);
    cout<<endl;
    display(a);
}