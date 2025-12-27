/*leetcode 92...
Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.
Example 1:
Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]

Example 2:
Input: head = [5], left = 1, right = 1
Output: [5]*/
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
ListNode* getnode(ListNode* head,int n){
    for(int i=1;i<n;i++) head=head->next;
    return head;
}
ListNode* reverseBetween(ListNode* head, int left, int right) {
    //my way not optimal T.C=O((left*right)*N) S.C=O(1)
    // ListNode* temp=head;
    // ListNode* pos1=head;
    // ListNode* pos2=head;
    // for(int i=1;i<left;i++) pos1=pos1->next;
    // for(int i=1;i<right;i++) pos2=pos2->next;
    // while(left<right){
    //     ListNode* a=getnode(head,left);
    //     ListNode* b=getnode(head,right);
    //     int t=a->val;
    //     a->val=b->val;
    //     b->val=t;
    //     left++;
    //     right--;
    // }
    // return head;

    //raghav sir way optimal T.C=O(N)  S.C=O(1)
    if(left==right) return head;
    ListNode *a=NULL,*b=NULL,*c=NULL,*d=NULL;
    ListNode* temp=head;
    int n=1;
    while(temp!=NULL){
        if(n==left-1) a=temp;
        if(n==left) b=temp;
        if(n==right) c=temp;
        if(n==right+1) d=temp;
        temp=temp->next;
        n++;
    }
    if(a) a->next=NULL;
    c->next=NULL;
    c=reverseList(b);
    if(a) a->next=c;
    b->next=d;
    if(a) return head;
    return c;
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
    int left,right;
    cout<<"enter left and right position to reverse:";
    cin>>left>>right;
    ListNode* result=reverseBetween(a,left,right);
    display(result);
}