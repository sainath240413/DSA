/*Leetcode 226...revise...
Given the root of a binary tree, invert the tree, and return its root.
Example 1:
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1] -> BFS traversal

Example 2:
Input: root = [2,1,3]
Output: [2,3,1]

Example 3:
Input: root = []
Output: []

Constraints:
The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100*/
#include<iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
void helper(TreeNode* root){
    if(root==NULL) return;
    TreeNode* temp=root->left;
    root->left=root->right;
    root->right=temp;
    helper(root->left);
    helper(root->right);
}
TreeNode* invertTree(TreeNode* root) {
    helper(root);
    return root;
}
void display(TreeNode* root){//preorder traversal
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    TreeNode* a=new TreeNode(4);
    TreeNode* b=new TreeNode(2);
    TreeNode* c=new TreeNode(7);
    TreeNode* d=new TreeNode(1);
    TreeNode* e=new TreeNode(3);
    TreeNode* f=new TreeNode(6);
    TreeNode* g=new TreeNode(9);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    invertTree(a);
    display(a);
}