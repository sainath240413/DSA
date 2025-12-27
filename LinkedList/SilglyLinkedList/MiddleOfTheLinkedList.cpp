/*Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes,return the second middle node.

Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

Example 2:
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.*/
#include<iostream>
using namespace std;
class ListNode{//user defined datatype
    public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
//leetcode....
ListNode* middleNode(ListNode* head) {
    ListNode* temp=head;
    int len=0;
    while(temp!=NULL) {
        temp=temp->next;
        len++;
    }
    int mididx=len/2;
    ListNode* mid=head;
    for(int i=1;i<=mididx;i++){
        mid=mid->next;
    }
    return mid;
}
/*interview point of view doing it in one pass*/
ListNode* middle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
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
    display(a);
    //ListNode* ans=middleNode(a);
    ListNode* ans1=middle(a);
    display(ans1);
}