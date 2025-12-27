/*Leetcode 106... revise and do it again...
Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and 
postorder is the postorder traversal of the same tree, construct and return the binary tree.

Example 1:
Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
Output: [3,9,20,null,null,15,7]

Example 2:
Input: inorder = [-1], postorder = [-1]
Output: [-1]

Constraints:
1 <= inorder.length <= 3000
postorder.length == inorder.length
-3000 <= inorder[i], postorder[i] <= 3000
inorder and postorder consist of unique values.
Each value of postorder also appears in inorder.
inorder is guaranteed to be the inorder traversal of the tree.
postorder is guaranteed to be the postorder traversal of the tree.*/
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
TreeNode* build(vector<int>post,int postlo,int posthi,vector<int>in,int inlo,int inhi){
    if(postlo>posthi || inlo>inhi) return NULL;
    TreeNode* root=new TreeNode(post[posthi]);
    if(postlo==posthi) return root;
    int i=inlo;
    while(i<=inhi){
        if(post[posthi]==in[i]) break;
        i++;
    }
    int leftcount=i-inlo;
    root->left=build(post,postlo,postlo+leftcount-1,in,inlo,i-1);
    root->right=build(post,postlo+leftcount,posthi-1,in,i+1,inhi);
    return root;
}
TreeNode* buildTree(vector<int>& in, vector<int>& post) {
    int n=in.size();
    return build(post,0,n-1,in,0,n-1);
}
void display(TreeNode* root){//preorder traversal
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    vector<int>post={9,15,7,20,3};
    vector<int>in={9,3,15,20,7};
    TreeNode* ans=buildTree(in,post);
    display(ans);
}