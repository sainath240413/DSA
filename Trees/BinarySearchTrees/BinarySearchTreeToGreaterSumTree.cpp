/*Leetcode 1038... revise...
Given the root of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original 
BST is changed to the original key plus the sum of all keys greater than the original key in BST.

As a reminder, a binary search tree is a tree that satisfies these constraints:
The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.

Example 1:
Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]

Example 2:
Input: root = [0,null,1]
Output: [1,null,1]
 
Constraints:
The number of nodes in the tree is in the range [1, 100].
0 <= Node.val <= 100
All the values in the tree are unique.*/
#include<iostream>
#include<vector>
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
int sum=0;
void reverseInorder(TreeNode* root){
    //right root left
    if(!root) return;
    reverseInorder(root->right);
    root->val+=sum;
    sum=root->val;
    reverseInorder(root->left);
}
TreeNode* bstToGst(TreeNode* root) {
    reverseInorder(root);
    return root;
}
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main(){
    // Example BST: [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
    TreeNode* a=new TreeNode(4);
    TreeNode* b=new TreeNode(1);
    TreeNode* c=new TreeNode(6);
    TreeNode* d=new TreeNode(0);
    TreeNode* e=new TreeNode(2);
    TreeNode* f=new TreeNode(5);
    TreeNode* g=new TreeNode(7);
    TreeNode* h=new TreeNode(3);
    TreeNode* i=new TreeNode(8);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    e->right=h;
    c->left=f;
    c->right=g;
    g->right=i;
    cout<<"Original BST inorder:";
    inorder(a);
    cout<<endl;
    bstToGst(a);
    cout<<"Greater Sum Tree inorder:";
    inorder(a);
    cout<<endl;
}