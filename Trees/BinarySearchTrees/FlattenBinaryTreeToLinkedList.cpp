/*Leetcode 114... revise...
Given the root of a binary tree, flatten the tree into a "linked list":
The "linked list" should use the same TreeNode class where the right child pointer points to the next node in 
the list and the left child pointer is always null.
The "linked list" should be in the same order as a pre-order traversal of the binary tree.
 
Example 1:
Input: root = [1,2,5,3,4,null,6]
Output: [1,null,2,null,3,null,4,null,5,null,6]

Example 2:
Input: root = []
Output: []

Example 3:
Input: root = [0]
Output: [0]
 
Constraints:
The number of nodes in the tree is in the range [0, 2000].
-100 <= Node.val <= 100
*/
#include<iostream>
#include<vector>
#include<climits>
#include<functional>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
//method->1 using extra vector T.C=O(n) S.C=O(n)
void preorderHelper(TreeNode* root, vector<TreeNode*>& ans) {
    if (!root) return;
    ans.push_back(root);
    preorderHelper(root->left, ans);
    preorderHelper(root->right, ans);
}
vector<TreeNode*> preorder(TreeNode* root,vector<TreeNode*> ans) {
    preorderHelper(root, ans);
    return ans;
}
void flatten(TreeNode* root) {
    vector<TreeNode*>ans;
    ans=preorder(root,ans);
    int n=ans.size();
    for(int i=0;i<n-1;i++){
        ans[i]->right=ans[i+1];
        ans[i]->left=NULL;
    }
}
//method->2 using recursion T.C=O(n) S.C=O(n)
void flatten(TreeNode* root) {
    if(!root) return;
    TreeNode* l=root->left;
    TreeNode* r=root->right;
    root->left=NULL;
    root->right=NULL;
    flatten(l);
    flatten(r);
    root->right=l;
    TreeNode* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }        
    temp->right=r;
}
//method->3 using morris traversal T.C=O(n) S.C=O(1)
void flatten(TreeNode* root){
    if(!root) return;
    TreeNode* curr=root;
    while(curr){
        if(curr->left){
            TreeNode* r=curr->right;
            curr->right=curr->left;
            TreeNode* pred=curr->left;
            while(pred->right) pred=pred->right;
            pred->right=r;
            curr=curr->left;
        }
        else curr=curr->right;
    }
    TreeNode* temp=root;
    while(temp->right){
        temp->left=NULL;
        temp=temp->right;
    }
}
int main(){ 
    TreeNode*a=new TreeNode(1);
    TreeNode*b=new TreeNode(2);
    TreeNode*c=new TreeNode(5);
    TreeNode*d=new TreeNode(3);
    TreeNode*e=new TreeNode(4);
    TreeNode*f=new TreeNode(6);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    flatten(a);
    TreeNode*cur=a;
    while(cur){
        cout<<cur->val<<" ";
        cur=cur->right;
    }
    cout<<endl;
}