/*leetcode 1669...
You are given two linked lists: list1 and list2 of sizes n and m respectively.
Remove list1's nodes from the ath node to the bth node, and put list2 in their place.
The blue edges and nodes in the following figure indicate the result:
Build the result list and return its head.

Example 1:
Input: list1 = [10,1,13,6,9,5], a = 3, b = 4, list2 = [1000000,1000001,1000002]
Output: [10,1,13,1000000,1000001,1000002,5]
Explanation: We remove the nodes 3 and 4 and put the entire list2 in their place. The blue edges and nodes in the above figure indicate the result.

Example 2:
Input: list1 = [0,1,2,3,4,5,6], a = 2, b = 5, list2 = [1000000,1000001,1000002,1000003,1000004]
Output: [0,1,1000000,1000001,1000002,1000003,1000004,6]
Explanation: The blue edges and nodes in the above figure indicate the result.*/
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
ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2){
    ListNode* temp1=list1;
    ListNode* temp2=list1;
    for(int i=1;i<a;i++) temp1=temp1->next;
    for(int i=0;i<=b;i++) temp2=temp2->next;
    temp1->next=list2;
    ListNode* temp=list1;
    while(temp->next!=NULL) temp=temp->next;
    temp->next=temp2;
    return list1;
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
    ListNode* a1=new ListNode(100);
    ListNode* b1=new ListNode(200);
    ListNode* c1=new ListNode(300);
    ListNode* d1=new ListNode(400);
    ListNode* e1=new ListNode(500);
    a1->next=b1;
    b1->next=c1;
    c1->next=d1;
    d1->next=e1;
    ListNode* ans1=mergeInBetween(a,2,3,a1);
    display(ans1);
}