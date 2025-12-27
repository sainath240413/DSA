/*Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and 
return the new head.

Example 1:
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]

Example 2:
Input: head = [], val = 1
Output: []

Example 3:
Input: head = [7,7,7,7], val = 7
Output: []
 
Constraints:
The number of nodes in the list is in the range [0, 104].
1 <= Node.val <= 50
0 <= val <= 50*/
#include<bits/stdc++.h>
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
ListNode* removeElements(ListNode* head,int val){
    if(!head) return NULL;
    while(head && head->val==val) head=head->next;
    ListNode* temp=head;
    while(temp && temp->next){
        if(temp->next->val==val){
            temp->next=temp->next->next;
        }
        else temp=temp->next;
    }
    return head;
}
void display(ListNode* head){
    while(head){
        cout<<head->val;
        head=head->next;
    }
}
int main(){
    ListNode* a=new ListNode(1);
    ListNode* b=new ListNode(2);
    ListNode* c=new ListNode(6);
    ListNode* d=new ListNode(3);
    ListNode* e=new ListNode(4);
    ListNode* f=new ListNode(5);
    ListNode* g=new ListNode(6);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    int val=6;
    display(a);
    cout<<endl;
    ListNode* ans=removeElements(a,val);
    display(ans);
}