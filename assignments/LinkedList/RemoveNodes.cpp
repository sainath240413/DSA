/* Given the head of a linked list and an integer val , remove all the nodes of the linked list that 
has Node.val == val , and return the new head. 

Example 1:
Input: head = [1,2,6,3,4,5,6], val = 6 
Output: [1,2,3,4,5] 

Example 2: 
Input: head = [], val = 1 
Output: [] 

Example 3: 
Input: head = [7,7,7,7], val = 7 
Output: []*/
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
ListNode* removenode(ListNode* head,int val){
    while(head!=NULL && head->val==val) {
        ListNode* temp=head;
        head=head->next;
        delete temp;
    }
    ListNode* current=head;
    while(current!=NULL && current->next!=NULL){
        if(current->next->val==val){
            ListNode* temp=current->next;
            current->next=current->next->next;
            delete temp;
        } 
        else{
            current=current->next;
        }
    }
    return head;
}
void display(ListNode* temp){
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    ListNode* a1=new ListNode(10);
    ListNode* a=new ListNode(10);
    ListNode* b=new ListNode(20);
    ListNode* c=new ListNode(30);
    ListNode* d=new ListNode(40);
    ListNode* e=new ListNode(50);
    a1->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    int val;
    cout<<"enter value:";
    cin>>val;
    ListNode* ans=removenode(a1,val);
    display(ans);
}