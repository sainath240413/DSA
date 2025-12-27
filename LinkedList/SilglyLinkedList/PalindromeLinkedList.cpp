/*leetcode 234...
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
Example 1:
Input: head = [1,2,2,1]
Output: true

Example 2:
Input: head = [1,2]
Output: false
*/
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
bool isPalindrome(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* right=reverseList(slow->next);
    slow->next=right;
    ListNode* temp=head;
    while(right!=NULL){
        if(temp->val!=right->val) return false;
        temp=temp->next;
        right=right->next;
    }
    return true;
}
void display(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
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
    cout<<isPalindrome(a);
}