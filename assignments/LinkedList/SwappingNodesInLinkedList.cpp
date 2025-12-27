/*leetcode 1721...
You are given the head of a linked list, and an integer k.
Return the head of the linked list after swapping the values of the kth node from the beginning and the kth 
node from the end (the list is 1-indexed).

Example 1:
Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]

Example 2:
Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]*/
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
ListNode* swapNodes(ListNode* head, int k) {
    ListNode* temp1=head;
    ListNode* temp=head;
    int size=0;
    for(int i=1;temp->next!=NULL;i++){
        if(i<k) temp1=temp1->next;
        temp=temp->next;
        size++;
    }
    size++;
    temp=head;
    for(int i=1;i<=size-k;i++) temp=temp->next;
    int a;
    a=temp1->val;
    temp1->val=temp->val;
    temp->val=a;
    return head;
}
void display(ListNode* temp){
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    ListNode* a=new ListNode(10);
    ListNode* b=new ListNode(20);
    ListNode* c=new ListNode(30);
    ListNode* d=new ListNode(40);
    ListNode* e=new ListNode(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    ListNode* ans1=swapNodes(a,2);
    display(ans1);
}