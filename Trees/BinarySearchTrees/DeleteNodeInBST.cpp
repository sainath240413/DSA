/*Leetcode 450...important...
Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root 
node reference (possibly updated) of the BST.
Basically, the deletion can be divided into two stages:
Search for a node to remove.
If the node is found, delete the node.

Example 1:
Input: root = [5,3,6,2,4,null,7], key = 3
Output: [5,4,6,2,null,null,7]
Explanation: Given key to delete is 3. So we find the node with value 3 and delete it.
One valid answer is [5,4,6,2,null,null,7], shown in the above BST.
Please notice that another valid answer is [5,2,6,null,4,null,7] and it's also accepted.

Example 2:
Input: root = [5,3,6,2,4,null,7], key = 0
Output: [5,3,6,2,4,null,7]
Explanation: The tree does not contain a node with value = 0.

Example 3:
Input: root = [], key = 0
Output: []
 
Constraints:
The number of nodes in the tree is in the range [0, 104].
-105 <= Node.val <= 105
Each node has a unique value.
root is a valid binary search tree.
-105 <= key <= 105*/
#include<iostream>
#include<vector>
#include<climits>
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
TreeNode* iop(TreeNode* root){
    TreeNode* pred=root->left;
    while(pred->right!=NULL) pred=pred->right;
    return pred;
}
TreeNode* ios(TreeNode* root){
    TreeNode* succ=root->right;
    while(succ->left!=NULL) succ=succ->left;
    return succ;
}
TreeNode* deleteNode(TreeNode* root, int key) {
    if(!root) return NULL;
    if(root->val==key){
        //leaf node
        if(root->left==NULL && root->right==NULL) return NULL;
        //with one child
        else if(root->left==NULL || root->right==NULL){
            if(root->left!=NULL) return root->left;
            else return root->right; 
        }
        //with two children
        else{
            //replace the node with inorder pred/succ and delete the pred/succ node from the tree
            TreeNode* pred=iop(root);
            root->val=pred->val;
            root->left=deleteNode(root->left,pred->val);
        }
    }
    else if(root->val>key) root->left=deleteNode(root->left,key);
    else root->right=deleteNode(root->right,key);
    return root;
}
void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

TreeNode* insert(TreeNode* root,int val){
    if (!root) return new TreeNode(val);
    if (val<root->val) root->left=insert(root->left,val);
    else root->right=insert(root->right,val);
    return root;
}
int main(){
    // Example BST: [5,3,6,2,4,null,7]
    vector<int>vals={5,3,6,2,4,7};
    TreeNode* root=NULL;
    for (int v : vals) root=insert(root,v);
    cout<<"Inorder before deletion: ";
    inorder(root);
    cout<<endl;
    int key=3;
    root=deleteNode(root,key);
    cout<<"Inorder after deleting"<<key<<": ";
    inorder(root);
    cout<<endl;
}