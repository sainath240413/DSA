/*Leetcode 725... revise...
Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list 
parts.

The length of each part should be as equal as possible: no two parts should have a size differing by more than 
one. This may lead to some parts being null.

The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have
a size greater than or equal to parts occurring later.

Return an array of the k parts.

Example 1:
Input: head = [1,2,3], k = 5
Output: [[1],[2],[3],[],[]]
Explanation:
The first element output[0] has output[0].val = 1, output[0].next = null.
The last element output[4] is null, but its string representation as a ListNode is [].

Example 2:
Input: head = [1,2,3,4,5,6,7,8,9,10], k = 3
Output: [[1,2,3,4],[5,6,7],[8,9,10]]
Explanation:
The input has been split into consecutive parts with size difference at most 1, and earlier parts are a larger 
size than the later parts.
 
Constraints:
The number of nodes in the list is in the range [0, 1000].
0 <= Node.val <= 1000
1 <= k <= 50*/
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
vector<ListNode*> splitListToParts(ListNode* head, int k) {
    ListNode* temp=head;
    int n=0;
    //find the length of original list
    while(temp){
        temp=temp->next;
        n++;
    }
    //breaking the OG list to k lists 
    vector<ListNode*>ans;
    temp=head;
    int parts=0;
    int size=n/k;
    int rem=n%k;
    while(temp!=NULL){
        ListNode* c=new ListNode(-1);
        ListNode* tempC=c;
        int s=size;
        if(rem>0) s++;
        rem--;
        for(int i=1;i<=s;i++){
            tempC->next=temp;
            temp=temp->next;
            tempC=tempC->next;
        }
        tempC->next=NULL;
        ans.push_back(c->next);
    }
    if(ans.size()<k){
        int extra=k-ans.size();
        for(int i=1;i<=extra;i++){
            ans.push_back(NULL);
        }
    }
    return ans;
}
void display(vector<ListNode*>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]->val<<" ";
    }
    cout<<endl;
}
int main(){
    ListNode* a=new ListNode(1);
    ListNode* b=new ListNode(2);
    ListNode* c=new ListNode(3);
    ListNode* d=new ListNode(4);
    ListNode* e=new ListNode(5);
    ListNode* f=new ListNode(6);
    ListNode* g=new ListNode(7);
    ListNode* h=new ListNode(8);
    ListNode* i=new ListNode(9);
    ListNode* j=new ListNode(10);
    ListNode* k=new ListNode(11);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;
    h->next=i;
    i->next=j;
    j->next=k;
    int parts;
    cout<<"enter no of parts to split:";
    cin>>parts;
    vector<ListNode*> res=splitListToParts(a,parts);
    display(res);
}