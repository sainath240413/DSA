/*Leetcode 86...
Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes
greater than or equal to x.
You should preserve the original relative order of the nodes in each of the two partitions.

Example 1:
Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]

Example 2:
Input: head = [2,1], x = 2
Output: [1,2]*/
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
ListNode* partition(ListNode* head, int x) {
    ListNode* list1=new ListNode(101);
    ListNode* list2=new ListNode(101);
    ListNode* head1=list1;
    ListNode* head2=list2;
    ListNode* temp=head;
    while(temp!=NULL){
        if(temp->val<x){
            head1->next=temp;
            temp=temp->next;
            head1=head1->next;
        }
        else{
            head2->next=temp;
            temp=temp->next;
            head2=head2->next;
        }
    }
    head1->next=list2->next;
    head2->next=NULL;
    return list1->next;
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
    ListNode* b=new ListNode(20);
    ListNode* c=new ListNode(-5);
    ListNode* d=new ListNode(10);
    ListNode* e=new ListNode(2);
    ListNode* f=new ListNode(4);
    ListNode* g=new ListNode(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    int x;
    cout<<"enter partioning value:";
    cin>>x;
    ListNode* result=partition(a,x);
    display(result);
}