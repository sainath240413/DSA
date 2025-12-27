/*Leetcode 700
You are given the root of a binary search tree (BST) and an integer val.
Find the node in the BST that the node's value equals val and return the subtree rooted with that node. 
If such a node does not exist, return null.

Example 1:
Input: root = [4,2,7,1,3], val = 2
Output: [2,1,3]

Example 2:
Input: root = [4,2,7,1,3], val = 5
Output: []

Constraints:
The number of nodes in the tree is in the range [1, 5000].
1 <= Node.val <= 107
root is a binary search tree.
1 <= val <= 107*/
#include<iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->left=NULL;
        this->right=NULL;
        this->val=val;
    }
};
TreeNode* insert(TreeNode* root,int val){
    if(root==NULL) return new TreeNode(val);
    if(val<root->val) root->left=insert(root->left,val);
    else root->right=insert(root->right,val);
    return root;
}
TreeNode* create(int a[],int n){//leetcode 701
    TreeNode* root=NULL;
    for(int i=0;i<n;i++){
        root=insert(root,a[i]);
    }
    return root;
}
TreeNode* searchBST(TreeNode* root, int val){//leetcode 700
    //best case T.C=O(log n) or O(h) h->height of tree for balanced tree
    //worst case T.c=O(n) or O(h) h->height of tree skewed tree
    //average case O(h) h->height of tree
    //space complexity is same as time complexity
    if(root==NULL) return NULL;
    else if(root->val==val) return root;
    else if(root->val>val) return searchBST(root->left,val);
    else return searchBST(root->right,val);
}
void display(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    int a[]={1,2,3,4,5,7};
    int n=sizeof(a)/sizeof(a[0]);
    TreeNode* root=create(a,n);
    int val;
    cout<<"enter value to search:";
    cin>>val;
    TreeNode* ans=searchBST(root,val);
    display(ans);
}