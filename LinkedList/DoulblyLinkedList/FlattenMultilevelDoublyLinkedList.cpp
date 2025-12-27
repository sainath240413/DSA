/*Leetcode 430...
You are given a doubly linked list, which contains nodes that have a next pointer, a previous pointer, and an 
additional child pointer. This child pointer may or may not point to a separate doubly linked list, also 
containing these special nodes. These child lists may have one or more children of their own, and so on, to 
produce a multilevel data structure as shown in the example below.

Given the head of the first level of the list, flatten the list so that all the nodes appear in a single-level, 
doubly linked list. Let curr be a node with a child list. The nodes in the child list should appear after curr 
and before curr.next in the flattened list.

Return the head of the flattened list. The nodes in the list must have all of their child pointers set to null.

Example 1:
Input: head = [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
Output: [1,2,3,7,8,11,12,9,10,4,5,6]
Explanation: The multilevel linked list in the input is shown.
After flattening the multilevel linked list it becomes:

Example 2:
Input: head = [1,2,null,3]
Output: [1,3,2]
Explanation: The multilevel linked list in the input is shown.
After flattening the multilevel linked list it becomes:

Example 3:
Input: head = []
Output: []
Explanation: There could be empty list in the input.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode* prev;
    ListNode* child;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
        this->child=NULL;
    }
};
ListNode* flatten(ListNode* head) {
    if(head==NULL) return head;
    ListNode* temp=head;
    while(temp){
        ListNode* a=temp->next;
        if(temp->child){
            ListNode* b=temp->child;
            temp->child=NULL;
            b=flatten(b);
            temp->next=b;
            if(b) b->prev=temp;
            while(b->next){
                b=b->next;
            }
            b->next=a;
            if(a) a->prev=b;
        }
        temp=a;
    }
    return head;
}
void print(ListNode*head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    // Example: 1-2-3-4-5-6, 3->7-8-9-10, 8->11-12
    ListNode*a=new ListNode(1);
    ListNode*b=new ListNode(2);
    ListNode*c=new ListNode(3);
    ListNode*d=new ListNode(4);
    ListNode*e=new ListNode(5);
    ListNode*f=new ListNode(6);
    ListNode*g=new ListNode(7);
    ListNode*h=new ListNode(8);
    ListNode*i=new ListNode(9);
    ListNode*j=new ListNode(10);
    ListNode*k=new ListNode(11);
    ListNode*l=new ListNode(12);
    a->next=b;b->prev=a;
    b->next=c;c->prev=b;
    c->next=d;d->prev=c;
    d->next=e;e->prev=d;
    e->next=f;f->prev=e;
    c->child=g;
    g->next=h;h->prev=g;
    h->next=i;i->prev=h;
    i->next=j;j->prev=i;
    h->child=k;
    k->next=l;l->prev=k;
    ListNode*res=flatten(a);
    print(res);
}