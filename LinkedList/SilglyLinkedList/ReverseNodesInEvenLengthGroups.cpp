/*leetcode 2074... do it again...
You are given the head of a linked list.
The nodes in the linked list are sequentially assigned to non-empty groups whose lengths form the sequence of 
the natural numbers (1,2,3,4,...). The length of a group is the number of nodes assigned to it. In other words,

The 1st node is assigned to the first group.
The 2nd and the 3rd nodes are assigned to the second group.
The 4th, 5th, and 6th nodes are assigned to the third group, and so on.
Note that the length of the last group may be less than or equal to 1 + the length of the second to last group.
Reverse the nodes in each group with an even length, and return the head of the modified linked list.

Example 1:
Input: head = [5,2,6,3,9,1,7,3,8,4]
Output: [5,6,2,3,9,1,4,8,3,7]
Explanation:
- The length of the first group is 1, which is odd, hence no reversal occurs.
- The length of the second group is 2, which is even, hence the nodes are reversed.
- The length of the third group is 3, which is odd, hence no reversal occurs.
- The length of the last group is 4, which is even, hence the nodes are reversed.

Example 2:
Input: head = [1,1,0,6]
Output: [1,0,1,6]
Explanation:
- The length of the first group is 1. No reversal occurs.
- The length of the second group is 2. The nodes are reversed.
- The length of the last group is 1. No reversal occurs.

Example 3:
Input: head = [1,1,0,6,5]
Output: [1,0,1,5,6]
Explanation:
- The length of the first group is 1. No reversal occurs.
- The length of the second group is 2. The nodes are reversed.
- The length of the last group is 2. The nodes are reversed.*/
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
ListNode* reverseBetween(ListNode* head, int left, int right) {
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
ListNode* reverseEvenLengthGroups(ListNode* head){
    // ListNode* temp=head;
    // int gap=1;
    // while(temp && temp->next){
    //     int remlen=0;
    //     ListNode* t=temp->next;
    //     for(int i=1;i<=gap+1 && t!=NULL;i++){
    //         t=t->next;
    //         remlen++;
    //     }
    //     if(remlen<gap+1) gap=remlen-1;
    //     if(gap%2!=0) reverseBetween(temp,2,2+gap);
    //     gap++;
    //     for(int i=1;temp!=NULL && i<=gap;i++) {
    //         temp=temp->next;
    //     }
    // }
    // return head;

    ListNode* prev=head;
    ListNode* curr=head->next;
    int groupSize=2;

    while(curr){
        // Count how many nodes are in this group
        ListNode* temp=curr;
        int count=0;
        while(count<groupSize && temp) {
            temp=temp->next;
            count++;
        }

        // If group size is even, reverse it
        if (count%2==0){
            // Reverse 'count' nodes starting from curr
            ListNode* prevNode=temp;
            ListNode* node=curr;
            for (int i=0;i<count;++i) {
                ListNode* next=node->next;
                node->next=prevNode;
                prevNode=node;
                node=next;
            }
            prev->next=prevNode;
            prev=curr;
            curr=temp;
        } 
        else{
            for(int i=0;i<count;++i) {
                prev=curr;
                curr=curr->next;
            }
        
        groupSize++;
        }
        return head;
    }
}
void display(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    ListNode* a=new ListNode(5);
    ListNode* b=new ListNode(2);
    ListNode* c=new ListNode(6);
    ListNode* d=new ListNode(3);
    ListNode* e=new ListNode(9);
    ListNode* f=new ListNode(1);
    ListNode* g=new ListNode(7);
    ListNode* h=new ListNode(3);
    ListNode* i=new ListNode(8);
    ListNode* j=new ListNode(4);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;
    h->next=i;
    i->next=j;
    ListNode* result=reverseEvenLengthGroups(a);
    display(result);
}