/*leetcode 328...
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes 
with even indices, and return the reordered list.
The first node is considered odd, and the second node is even, and so on.
Note that the relative order inside both the even and odd groups should remain as it was in the input.
You must solve the problem in O(1) extra space complexity and O(n) time complexity.

Example 1:
Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]

Example 2:
Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]
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
ListNode* oddEvenList(ListNode* head) {
    if(head==NULL || head->next==NULL) return head;
    ListNode* anshead=head->next;
    ListNode* temp1=head;
    ListNode* temp2=head->next;
    while(temp2!=NULL && temp2->next!=NULL){
        temp1->next=temp2->next;
        temp1=temp1->next;
        temp2->next=temp1->next;
        temp2=temp2->next;
    }
    temp1->next=anshead;
    return head;
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
    ListNode* result=oddEvenList(a);
    display(result);
}