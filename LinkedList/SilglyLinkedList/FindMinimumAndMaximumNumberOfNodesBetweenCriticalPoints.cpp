/*Leetcode 2058... revise... do it again... not understood well....
A critical point in a linked list is defined as either a local maxima or a local minima.
A node is a local maxima if the current node has a value strictly greater than the previous node and the next 
node.
A node is a local minima if the current node has a value strictly smaller than the previous node and the next 
node.
Note that a node can only be a local maxima/minima if there exists both a previous node and a next node.

Given a linked list head, return an array of length 2 containing [minDistance, maxDistance] where minDistance 
is the minimum distance between any two distinct critical points and maxDistance is the maximum distance between
any two distinct critical points. If there are fewer than two critical points, return [-1, -1].

Example 1:
Input: head = [3,1]
Output: [-1,-1]
Explanation: There are no critical points in [3,1].

Example 2:
Input: head = [5,3,1,2,5,1,2]
Output: [1,3]
Explanation: There are three critical points:
- [5,3,1,2,5,1,2]: The third node is a local minima because 1 is less than 3 and 2.
- [5,3,1,2,5,1,2]: The fifth node is a local maxima because 5 is greater than 2 and 1.
- [5,3,1,2,5,1,2]: The sixth node is a local minima because 1 is less than 5 and 2.
The minimum distance is between the fifth and the sixth node. minDistance = 6 - 5 = 1.
The maximum distance is between the third and the sixth node. maxDistance = 6 - 3 = 3.

Example 3:
Input: head = [1,3,2,2,3,2,2,2,7]
Output: [3,3]
Explanation: There are two critical points:
- [1,3,2,2,3,2,2,2,7]: The second node is a local maxima because 3 is greater than 1 and 2.
- [1,3,2,2,3,2,2,2,7]: The fifth node is a local maxima because 3 is greater than 2 and 2.
Both the minimum and maximum distances are between the second and the fifth node.
Thus, minDistance and maxDistance is 5 - 2 = 3.
Note that the last node is not considered a local maxima because it does not have a next node.

Constraints:
The number of nodes in the list is in the range [2, 105].
1 <= Node.val <= 105*/
#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
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
vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    ListNode* a=head;
    ListNode* b=head->next;
    ListNode* c=head->next->next;
    if(c==NULL) return {-1,-1};
    int idx=1;
    int fidx=-1;
    int sidx=-1;
    int minima=INT_MAX;
    int f=-1,s=-1;
    while(c!=NULL){
        if(b->val>a->val && b->val>c->val || b->val<a->val && b->val<c->val){
            //maxima
            if(fidx==-1) fidx=idx;
            else sidx=idx;
            //minima
            f=s;
            s=idx;
            if(f!=-1){
                int d=s-f;
                minima=min(minima,d);
            }
        }
        a=a->next;
        b=b->next;
        c=c->next;
        idx++;
    }
    if(sidx==-1) return {-1,-1};
    int maxima=sidx-fidx;
    return {minima,maxima};
}
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ListNode* a=new ListNode(1);
    ListNode* b=new ListNode(3);
    ListNode* c=new ListNode(2);
    ListNode* d=new ListNode(2);
    ListNode* e=new ListNode(3);
    ListNode* f=new ListNode(2);
    ListNode* g=new ListNode(2);
    ListNode* h=new ListNode(2);
    ListNode* i=new ListNode(7);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;
    h->next=i;
    vector<int> res=nodesBetweenCriticalPoints(a);
    display(res);
}