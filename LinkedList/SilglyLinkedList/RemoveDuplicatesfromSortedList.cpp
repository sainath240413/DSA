/*leetcode...
Given the head of a sorted linked list, delete all duplicates such that each element appears only once.Return
the linked list sorted as well.

Example 1:
Input: head = [1,1,2]
Output: [1,2]

Example 2:
Input: head = [1,1,2,3,3]
Output: [1,2,3]*/
#include<iostream>
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
ListNode* deleteDuplicates(ListNode* head) {
    ListNode* temp1=head;
    if(head==NULL || head->next==NULL) return head;
    ListNode* temp2=head->next;
    while(temp2!=NULL){
        while(temp2!=NULL && temp2->val==temp1->val){
            temp2=temp2->next;
        }
        temp1->next=temp2;
        temp1=temp2;
        if(temp2!=NULL) temp2=temp2->next;
    }
    return head;
}
void display(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
int main(){
    ListNode* a=new ListNode(10);
    ListNode* b=new ListNode(10);
    ListNode* c=new ListNode(20);
    ListNode* d=new ListNode(30);
    ListNode* e=new ListNode(40);
    ListNode* f=new ListNode(50);
    ListNode* g=new ListNode(50);
    ListNode* h=new ListNode(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;
    display(a);
    cout<<endl;
    ListNode* ans=deleteDuplicates(a);
    display(a);
}