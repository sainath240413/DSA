/*Leetcode 21...
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first 
two lists.
Return the head of the merged linked list.

Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:
Input: list1 = [], list2 = []
Output: []

Example 3:
Input: list1 = [], list2 = [0]
Output: [0]

Constraints:
The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.*/
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
ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
    //space complexity=O(m+n) as we created extra list
    // ListNode* temp1=a;
    // ListNode* temp2=b;
    // ListNode* c=new ListNode(101);
    // ListNode* tempc=c;
    // while(temp1!=NULL && temp2!=NULL){
    //     if(temp1->val<=temp2->val){
    //         ListNode* t=new ListNode(temp1->val);
    //         tempc->next=t;
    //         tempc=t;
    //         temp1=temp1->next;
    //     }
    //     else{
    //         ListNode* t=new ListNode(temp2->val);
    //         tempc->next=t;
    //         tempc=t;
    //         temp2=temp2->next;
    //     }
    // }
    // if(temp1==NULL){
    //     tempc->next=temp2;
    // }
    // else{
    //     tempc->next=temp1;
    // }
    // return c->next;

    //space complexity=O(1) without using extra space
    ListNode* c=new ListNode(101);
    ListNode* temp=c;
    while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
            temp->next=a;
            a=a->next;
            temp=temp->next;
        }
        else{
            temp->next=b;
            b=b->next;
            temp=temp->next;
        }
    }
    if(a==NULL) temp->next=b;
    else temp->next=a;
    return c->next;
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
    ListNode* a1=new ListNode(1);
    ListNode* b1=new ListNode(5);
    ListNode* c1=new ListNode(10);
    ListNode* d1=new ListNode(30);
    ListNode* e1=new ListNode(40);
    ListNode* f1=new ListNode(50);
    ListNode* g1=new ListNode(54);
    a1->next=b1;
    b1->next=c1;
    c1->next=d1;
    d1->next=e1;
    e1->next=f1;
    f1->next=g1;
    ListNode* result = mergeTwoLists(a,a1);
    display(result);
}