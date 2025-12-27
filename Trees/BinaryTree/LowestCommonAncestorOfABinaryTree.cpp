/*leetcode 236...
Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.
According to the definition of LCA on Wikipedia:“The lowest common ancestor is defined between two nodes p and q
as the lowest node in T that has both p and q as descendants(where we allow a node to be a descendant of itself).”

Example 1:
Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
Output: 3
Explanation: The LCA of nodes 5 and 1 is 3.

Example 2:
Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
Output: 5
Explanation: The LCA of nodes 5 and 4 is 5, since a node can be a descendant of itself according to the LCA definition.

Example 3:
Input: root = [1,2], p = 1, q = 2
Output: 1
 
Constraints:
The number of nodes in the tree is in the range [2, 105].
-109 <= Node.val <= 109
All Node.val are unique.
p != q
p and q will exist in the tree.*/
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
bool exists(TreeNode* root,TreeNode* target){
    if(root==NULL) return false;
    if(root==target) return true;
    else return exists(root->left,target) || exists(root->right,target);
}
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(exists(root->left,q) && exists(root->left,p)) return lowestCommonAncestor(root->left,p,q);
    if(exists(root->right,q) && exists(root->right,p)) return lowestCommonAncestor(root->right,p,q);
    else return root;
}
int main(){
    TreeNode* a=new TreeNode(3);
    TreeNode* b=new TreeNode(5);
    TreeNode* c=new TreeNode(1);
    TreeNode* d=new TreeNode(6);
    TreeNode* e=new TreeNode(2);
    TreeNode* f=new TreeNode(0);
    TreeNode* g=new TreeNode(8);
    TreeNode* h=new TreeNode(7);
    TreeNode* i=new TreeNode(4);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    e->left=h;
    e->right=i;
    cout<<lowestCommonAncestor(a,b,c)->val<<endl; //Output: 3
    cout<<lowestCommonAncestor(a,b,i)->val<<endl; //Output: 5
}