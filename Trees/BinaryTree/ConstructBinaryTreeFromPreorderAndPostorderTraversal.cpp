/*Leetcode 889... revise...
Given two integer arrays, preorder and postorder where preorder is the preorder traversal of a binary tree of 
distinct values and postorder is the postorder traversal of the same tree,reconstruct and return the binary tree.
If there exist multiple answers, you can return any of them.

Example 1:
Input: preorder = [1,2,4,5,3,6,7], postorder = [4,5,2,6,7,3,1]
Output: [1,2,3,4,5,6,7]

Example 2:
Input: preorder = [1], postorder = [1]
Output: [1]

Constraints:
1 <= preorder.length <= 30
1 <= preorder[i] <= preorder.length
All the values of preorder are unique.
postorder.length == preorder.length
1 <= postorder[i] <= postorder.length
All the values of postorder are unique.
It is guaranteed that preorder and postorder are the preorder traversal and postorder traversal of the same 
binary tree.*/
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
        this->left = NULL;
        this->right = NULL;
    }
};
int pre_idx=0,post_idx=0;
TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
    TreeNode* node=new TreeNode(pre[pre_idx]);
    pre_idx++;
    if(node->val!=post[post_idx]) {
        node->left=constructFromPrePost(pre,post);
    }
    if(node->val!=post[post_idx]){
        node->right=constructFromPrePost(pre,post);
    }
    post_idx++;
    return node;
}
void display(TreeNode* root){//preorder traversal
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    vector<int>post={4,5,2,6,7,3,1};
    vector<int>pre={1,2,4,5,3,6,7};
    TreeNode* ans=constructFromPrePost(pre,post);
    display(ans);
}