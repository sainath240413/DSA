/*Leetcode 23... revise...
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it.

Example 1:
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted linked list:
1->1->2->3->4->4->5->6

Example 2:
Input: lists = []
Output: []

Example 3:
Input: lists = [[]]
Output: []
 
Constraints:
k == lists.length
0 <= k <= 104
0 <= lists[i].length <= 500
-104 <= lists[i][j] <= 104
lists[i] is sorted in ascending order.
The sum of lists[i].length will not exceed 104.*/
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
ListNode* merge(ListNode* a,ListNode* b){
    ListNode* c=new ListNode(101);
    ListNode* temp=c;
    while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
            temp->next=a;
            a=a->next;
            temp=temp->next;
        }
        else{
            temp->next=b;
            b=b->next;
            temp=temp->next;
        }
    }
    if(a==NULL) temp->next=b;
    else temp->next=a;
    return c->next;
}
ListNode* mergeKLists(vector<ListNode*>& arr) {
    if(arr.size()==0) return NULL;
    while(arr.size()>1){
        // ListNode* a=arr[arr.size()-1];
        // arr.pop_back();
        // ListNode* b=arr[arr.size()-1];
        // arr.pop_back();
        //changed to this
        ListNode* a=arr[0];
        arr.erase(arr.begin());
        ListNode* b=arr[0];
        arr.erase(arr.begin());
        ListNode* c=merge(a,b);
        arr.push_back(c);
    }
    return arr[0];
}
void display(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    ListNode* a=new ListNode(1);
    ListNode* b=new ListNode(2);
    ListNode* c=new ListNode(3);
    ListNode* d=new ListNode(3);
    ListNode* e=new ListNode(4);
    ListNode* f=new ListNode(4);
    ListNode* g=new ListNode(5);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    ListNode* a1=new ListNode(1);
    ListNode* b1=new ListNode(5);
    ListNode* c1=new ListNode(10);
    ListNode* d1=new ListNode(30);
    ListNode* e1=new ListNode(40);
    ListNode* f1=new ListNode(50);
    ListNode* g1=new ListNode(54);
    a1->next=b1;
    b1->next=c1;
    c1->next=d1;
    d1->next=e1;
    e1->next=f1;
    f1->next=g1;
    ListNode* result = merge(a,a1);
    display(result);
}