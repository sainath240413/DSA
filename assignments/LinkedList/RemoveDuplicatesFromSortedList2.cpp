/*Leetcode 82... revise....
Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct 
numbers from the original list. Return the linked list sorted as well.

Example 1:
Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]

Example 2:
Input: head = [1,1,1,2,3]
Output: [2,3]

Constraints:
The number of nodes in the list is in the range [0, 300].
-100 <= Node.val <= 100
The list is guaranteed to be sorted in ascending order.*/
#include <iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};
ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL) return NULL;
    ListNode* temp=new ListNode(-101);
    temp->next=head;
    ListNode* prev=temp;
    while(head!=NULL){
        if(head->next!=NULL && head->val==head->next->val){
            int val=head->val;
            while(head!=NULL && head->val==val){
                head=head->next;
            }
            prev->next=head;
        }
        else{
            head=head->next;
            prev=prev->next;
        }
    }
    temp=temp->next;
    return temp;
}
void display(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    ListNode* a=new ListNode(1);
    ListNode* b=new ListNode(2);
    ListNode* c=new ListNode(3);
    ListNode* d=new ListNode(3);
    ListNode* e=new ListNode(4);
    ListNode* f=new ListNode(4);
    ListNode* g=new ListNode(5);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    ListNode* result = deleteDuplicates(a);
    display(result);
}