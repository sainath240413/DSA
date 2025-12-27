/*leetcode 206...
Given the head of a singly linked list, reverse the list, and return the reversed list.
Example 1:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Example 2:
Input: head = [1,2]
Output: [2,1]

Example 3:
Input: head = []
Output: []
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
ListNode* getidx(ListNode* head,int idx){
    ListNode* temp=head;
    for(int i=1;i<=idx;i++){
        temp=temp->next;
    }
    return temp;
}
ListNode* reverseList(ListNode* head){
    /* method-1 worst time complexity
    ListNode* temp=head;
    int n=0;
    while(temp){
        temp=temp->next;
        n++;
    }
    int i=0,j=n-1;
    while(i<j){
        ListNode* left=getidx(head,i);
        ListNode* right=getidx(head,j);
        int t=left->val;
        left->val=right->val;
        right->val=t;
        i++;
        j--;
    }
    return head;
    */

    /*method-2 iterative method*/
    // ListNode* prevnode=NULL;
    // ListNode* current=head;
    // ListNode* nextnode=head;
    // while(nextnode!=NULL){
    //     nextnode=nextnode->next;
    //     current->next=prevnode;
    //     prevnode=current;
    //     current=nextnode;
    // }
    // head=prevnode;
    // return head;

    /*recursive approach*/
    if(head==NULL || head->next==NULL) return head;
    ListNode* newhead=reverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
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
    ListNode* result=reverseList(a);
    display(result);
}