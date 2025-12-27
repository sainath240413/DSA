/*leetcode 143...
You are given the head of a singly linked-list. The list can be represented as:
L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:
L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.
Example 1:
Input: head = [1,2,3,4]
Output: [1,4,2,3]

Example 2:
Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
ListNode* reverseList(ListNode* head){
    ListNode* prevnode=NULL;
    ListNode* current=head;
    ListNode* nextnode=head;
    while(nextnode!=NULL){
        nextnode=nextnode->next;
        current->next=prevnode;
        prevnode=current;
        current=nextnode;
    }
    head=prevnode;
    return head;
}
void reorderList(ListNode* head) {
    //chatgpt
    if (!head || !head->next || !head->next->next) return;
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* second=reverseList(slow->next);
    slow->next=NULL;
    ListNode* first=head;
    while(second){
        ListNode* temp1=first->next;
        ListNode* temp2=second->next;
        first->next=second;
        second->next=temp1;
        first=temp1;
        second=temp2;
    }
    //raghav sir and my method
    if (!head || !head->next || !head->next->next) return;
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* b=reverseList(slow->next);
    ListNode* a=head;
    slow->next=NULL;
    ListNode* c=new ListNode(0);
    ListNode* tempC=c;
    ListNode* tempA=a;
    ListNode* tempB=b;
    while(tempA && tempB){
        tempC->next=tempA;
        tempA=tempA->next;
        tempC=tempC->next;
        tempC->next=tempB;
        tempB=tempB->next;
        tempC=tempC->next;
    }
    tempC->next=tempA;
    head=c->next;
}
int main(){
    ListNode* a=new ListNode(2);
    ListNode* b=new ListNode(1);
    ListNode* c=new ListNode(3);
    ListNode* d=new ListNode(5);
    ListNode* e=new ListNode(6);
    ListNode* f=new ListNode(4);
    ListNode* g=new ListNode(7);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    reorderList(a);
}