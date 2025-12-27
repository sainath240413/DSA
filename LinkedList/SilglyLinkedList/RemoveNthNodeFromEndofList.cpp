/*leetcode...
Given the head of a linked list, remove the nth node from the end of the list and return its head.
Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Example 2:
Input: head = [1], n = 1
Output: []

Example 3:
Input: head = [1,2], n = 1
Output: [1]

Constraints:
The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz

Follow up: Could you do this in one pass?*/
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
node* removeNthFromEnd(node* head, int n) {
    //my way using O(n) time complexity but interviewer asks to do it in one pass
    node* temp=head;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    if(size==1) return NULL;
    if(size==0) return head;
    if(n==size) return head->next;
    temp=head;
    int i=1;
    while(i+n!=size){
        temp=temp->next;
        i++;
    }
    temp->next=temp->next->next;
    temp=head;
    return temp;

    //both are done in O(n) time complexity

    //raghav sir way
    node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    if(len==n){
        head=head->next;
        return head;
    }
    int m=len-n+1;
    int idx=m-1;
    temp=head;
    for(int i=1;i<=idx-1;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return temp;
}
//done in one pass which takes almost O(1) time complexity
node* deleteanodeatendfromidx(node* head,int n){
    node* slow=head;
    node* fast=head;
    for(int i=1;i<=n+1;i++){
        if(fast==NULL) return head->next;
        fast=fast->next;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return head;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    node* e=new node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    int n;
    cout<<"enter the index from last to delete in linked list:";
    cin>>n;
    display(a);
    node* ans=removeNthFromEnd(a,n);
    cout<<endl;
    display(a);
}