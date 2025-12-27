/*Leetcode 138...revise and do it in ur way...
A linked list of length n is given such that each node contains an additional random pointer, which could point 
to any node in the list, or null.

Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes,where each new node
has its value set to the value of its corresponding original node.Both the next and random pointer of the new 
nodes should point to new nodes in the copied list such that the pointers in the original list and copied list 
represent the same list state. None of the pointers in the new list should point to nodes in the original list.

For example,if there are two nodes X and Y in the original list,where X.random --> Y,then for the corresponding
two nodes x and y in the copied list, x.random --> y.

Return the head of the copied linked list.

The linked list is represented in the input/output as a list of n nodes. Each node is represented as a pair of 
[val, random_index] where:

val: an integer representing Node.val
random_index: the index of the node (range from 0 to n-1) that the random pointer points to, or null if it does
not point to any node.
Your code will only be given the head of the original linked list.

Example 1:
Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]

Example 2:
Input: head = [[1,1],[2,1]]
Output: [[1,1],[2,1]]

Example 3:
Input: head = [[3,null],[3,0],[3,null]]
Output: [[3,null],[3,0],[3,null]]

Constraints:
0 <= n <= 1000
-104 <= Node.val <= 104
Node.random is null or is pointing to some node in the linked list.*/
#include<iostream>
#include<unordered_map>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
Node* copyRandomList(Node* head) {
    //method->1 only works in non duplicate values
    // Node* temp=head;
    // Node* a=new Node(10001);
    // Node* b=a;
    // while(temp){
    //     Node* n=new Node(temp->val);
    //     b->next=n;
    //     temp=temp->next;
    //     b=b->next;
    // }
    // b->next=NULL;
    // Node* ans=a->next;
    // b=a->next;
    // temp=head;
    // while(temp){
    //     Node* var=ans;
    //     while(var){
    //         if(temp->random==NULL){
    //             b->random=NULL;
    //             b=b->next;
    //             break;
    //         }
    //         else{
    //             if(temp->random->val==var->val){
    //                 b->random=var;
    //                 b=b->next;
    //                 break;
    //             }
    //             else{
    //                 var=var->next;
    //             }
    //         }
    //     }
    //     temp=temp->next;
    // }
    // return ans;
    
    //method->2 works in all cases and efficient T.C=O(n) S.C=O(1)
    //step-1 create deepcopy without random pointer
    Node* dummy=new Node(10001);
    Node* tempC=dummy;
    Node* temp=head;
    while(temp){
        Node* a=new Node(temp->val);
        tempC->next=a;
        temp=temp->next;
        tempC=tempC->next;
    }
    Node* duplicate=dummy->next;
    //step-2 alternatively merge og and dummy lists
    Node* a=head;
    Node* b=duplicate;
    dummy=new Node(10001);
    Node* tempD=dummy;
    while(b){
        tempD->next=a;
        a=a->next;
        tempD=tempD->next;
        tempD->next=b;
        b=b->next;
        tempD=tempD->next;
    }
    dummy=dummy->next;
    //step-3 assigning random pointer of duplicte
    Node* t1=dummy;//traverse original list
    Node* t2=dummy;//traverse duplicate list
    while(t1){
        t2=t1->next;
        if(t1->random) t2->random=t1->random->next;
        t1=t1->next->next;
    }
    //step-4 removing alternative connections
    Node* d1=new Node(-1);
    Node* d2=new Node(-1);
    t1=d1;
    t2=d2;
    Node* t=dummy;
    while(t){
        t1->next=t;
        t=t->next;
        t1=t1->next;
        t2->next=t;
        t=t->next;
        t2=t2->next;
    }
    d1=d1->next;
    d2=d2->next;
    t1->next=NULL;//original with random
    t2->next=NULL;//duplicate with random
    return d2;


    //method->3 works in all cases and efficient T.C=O(n) S.C=O(n) using unordered_map 
    // it is in sets and map folder
}
void display(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Node* a=new Node(7);
    Node* b=new Node(13);
    Node* c=new Node(11);
    Node* d=new Node(10);
    Node* e=new Node(1);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    a->random=NULL;
    b->random=a;
    c->random=e;
    d->random=c;
    e->random=a;
    Node* ans=copyRandomList(a);
    display(ans);
}