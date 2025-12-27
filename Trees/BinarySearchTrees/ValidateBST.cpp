/*Leetcode 98
Given the root of a binary tree, determine if it is a valid binary search tree (BST).
A valid BST is defined as follows:
The left subtree of a node contains only nodes with keys strictly less than the node's key.
The right subtree of a node contains only nodes with keys strictly greater than the node's key.
Both the left and right subtrees must also be binary search trees.
Example 1:
Input: root = [2,1,3]
Output: true

Example 2:
Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.

Constraints:
The number of nodes in the tree is in the range [1, 104].
-231 <= Node.val <= 231 - 1*/
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
vector<int> inorder(TreeNode* root,vector<int>&ans){
    if(!root) return ans;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
    return ans;
}
TreeNode* prev=NULL;
bool flag=true;
void inorder2(TreeNode* root){
    if(!root) return;
    inorder2(root->left);
    if(::prev!=NULL){
        if(root->val<=::prev->val){
            flag=false;
            return;
        }
    }
    ::prev=root;
    inorder2(root->right);
    return;
}
bool isValidBST(TreeNode* root){
    inorder2(root);
    return flag;
}
int main(){
    TreeNode* root=new TreeNode(2);
    root->left=new TreeNode(1);
    root->right=new TreeNode(3);
    if(isValidBST(root)) cout<<"The Tree is a Valid BST"<<endl;
    else cout<<"The Tree is NOT a Valid BST"<<endl;
}
