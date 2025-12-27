/* leetcode...revise...
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect.
If the two linked lists have no intersection at all, return null.
For example, the following two linked lists begin to intersect at node c1:
The test cases are generated such that there are no cycles anywhere in the entire linked structure.
Note that the linked lists must retain their original structure after the function returns.

Custom Judge:
The inputs to the judge are given as follows (your program is not given these inputs):
intersectVal - The value of the node where the intersection occurs. This is 0 if there is no intersected node.
listA - The first linked list.
listB - The second linked list.
skipA - The number of nodes to skip ahead in listA (starting from the head) to get to the intersected node.
skipB - The number of nodes to skip ahead in listB (starting from the head) to get to the intersected node.
The judge will then create the linked structure based on these inputs and pass the two heads, headA and headB
to your program. If you correctly return the intersected node, then your solution will be accepted.

Example 1:
Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Intersected at '8'
Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes 
before the intersected node in A; There are 3 nodes before the intersected node in B.
- Note that the intersected node's value is not 1 because the nodes with value 1 in A and B (2nd node in A and 
3rd node in B) are different node references. In other words, they point to two different locations in memory, 
while the nodes with value 8 in A and B (3rd node in A and 4th node in B) point to the same location in memory.

Example 2:
Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
Output: Intersected at '2'
Explanation: The intersected node's value is 2 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [1,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before
the intersected node in A; There are 1 node before the intersected node in B.

Example 3:
Input: intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
Output: No intersection
Explanation: From the head of A, it reads as [2,6,4]. From the head of B, it reads as [1,5]. Since the two lists
do not intersect, intersectVal must be 0, while skipA and skipB can be arbitrary values.
Explanation: The two lists do not intersect, so return null*/
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
ListNode* getIntersectionNode(ListNode *headA, ListNode *headB){
    ListNode* temp1=headA;
    ListNode* temp2=headB;
    int len1=0,len2=0;
    while(temp1!=NULL) {
        len1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        len2++;
        temp2=temp2->next;
    }
    temp1=headA;
    temp2=headB;
    if(len1<len2){
        for(int i=1;i<=abs(len2-len1);i++) temp2=temp2->next;
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
    }
    else{
        for(int i=1;i<=abs(len2-len1);i++) temp1=temp1->next;
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
    }
    return NULL;
}
void display(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
int main(){
    ListNode* a1=new ListNode(10);
    ListNode* b1=new ListNode(20);
    ListNode* c1=new ListNode(30);
    ListNode* d1=new ListNode(40);
    ListNode* e1=new ListNode(50);
    a1->next=b1;
    b1->next=c1;
    c1->next=d1;
    d1->next=e1;
    ListNode* a2=new ListNode(1);
    ListNode* b2=new ListNode(2);
    ListNode* c2=new ListNode(30);
    ListNode* d2=new ListNode(40);
    ListNode* e2=new ListNode(50);
    a2->next=b2;
    b2->next=c2;
    c2->next=d2;
    d2->next=e2;
    display(a1);
    cout<<endl;
    display(a2);
    ListNode* ans=getIntersectionNode(a1,a2);
    cout<<endl;
    display(ans);
}

