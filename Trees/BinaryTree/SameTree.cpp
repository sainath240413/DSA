/*Leetcode 100...
Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
Example 1:
Input: p = [1,2,3], q = [1,2,3]
Output: true

Example 2:
Input: p = [1,2], q = [1,null,2]
Output: false

Example 3:
Input: p = [1,2,1], q = [1,1,2]
Output: false
 
Constraints:
The number of nodes in both trees is in the range [0, 100].
-104 <= Node.val <= 104
*/
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
bool isSameTree(Node* p,Node* q) {
    if(p==NULL &&  q==NULL) return true;
    if(p==NULL || q==NULL) return false;
    if((p->val!=q->val)) return false;
    bool lstans=isSameTree(p->left,q->left);
    if(lstans==false) return false;
    bool rstans=isSameTree(p->right,q->right);
    if(rstans==false) return false;
    return true;
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;

    Node* x=new Node(1);
    Node* y=new Node(2);
    Node* z=new Node(3);
    x->left=y;
    x->right=z;

    cout<<boolalpha<<isSameTree(a,x)<<endl; // Output: false
    cout<<boolalpha<<isSameTree(a,a)<<endl; // Output: true
}