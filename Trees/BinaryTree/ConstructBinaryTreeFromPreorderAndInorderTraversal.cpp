/*Leetcode 105... revise...
Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and 
inorder is the inorder traversal of the same tree, construct and return the binary tree.

Example 1:
Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
Output: [3,9,20,null,null,15,7]

Example 2:
Input: preorder = [-1], inorder = [-1]
Output: [-1]
 
Constraints:
1 <= preorder.length <= 3000
inorder.length == preorder.length
-3000 <= preorder[i], inorder[i] <= 3000
preorder and inorder consist of unique values.
Each value of inorder also appears in preorder.
preorder is guaranteed to be the preorder traversal of the tree.
inorder is guaranteed to be the inorder traversal of the tree.
*/
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
TreeNode* build(vector<int>pre,int prelo,int prehi,vector<int>in,int inlo,int inhi){
    if(prelo>prehi) return NULL;
    TreeNode* root=new TreeNode(pre[prelo]);
    if(prelo==prehi) return root;
    int i=inlo;
    while(i<=inhi){
        if(pre[prelo]==in[i]) break;
        i++;
    }
    int leftcount=i-inlo;
    int rightcount=inhi-i;
    root->left=build(pre,prelo+1,prelo+leftcount,in,inlo,i-1);
    root->right=build(pre,prelo+leftcount+1,prehi,in,i+1,inhi);
    return root;
}
TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
    int n=pre.size();
    return build(pre,0,n-1,in,0,n-1);
}
void display(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    vector<int>pre={3,9,20,15,7};
    vector<int>in={9,3,15,20,7};
    TreeNode* ans=buildTree(pre,in);
    display(ans);
}