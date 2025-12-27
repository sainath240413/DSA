/*leetcode...
Given the head of a linked list, rotate the list to the right by k places.

Example 1:
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]

Example 2:
Input: head = [0,1,2], k = 4
Output: [2,0,1]*/
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
ListNode* rotateRight(ListNode* head, int k) {
    ListNode* temp=head;
    ListNode* tail=head;
    int len=0;
    while(temp!=NULL) {
        if(temp->next==NULL) tail=temp;
        temp=temp->next;
        len++;
    }
    temp=head;
    if(len==0) return NULL;
    k=k%len;
    if(k==0) return head;
    for(int i=1;i<len-k;i++){
        temp=temp->next;
    }
    tail->next=head;
    head=temp->next;
    temp->next=NULL;
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
    int k;
    cout<<"enter no of rotations:";
    cin>>k;
    display(a);
    cout<<endl;
    ListNode* ans=rotateRight(a,k);
    display(ans);
}