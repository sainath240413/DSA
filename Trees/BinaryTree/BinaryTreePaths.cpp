/*Leetcode 257...revise...
Given the root of a binary tree, return all root-to-leaf paths in any order.
A leaf is a node with no children.
Example 1:
Input: root = [1,2,3,null,5]
Output: ["1->2->5","1->3"]

Example 2:
Input: root = [1]
Output: ["1"]

Constraints:
The number of nodes in the tree is in the range [1, 100].
-100 <= Node.val <= 100*/
#include<iostream>
#include<vector>
#include<string>
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
void helper(TreeNode* root,string s,vector<string>&ans){
    if(root==NULL) return;
    string x=to_string(root->val);
    if(root->left==NULL && root->right==NULL) {
        s+=x;
        ans.push_back(s);
        return;
    }
    helper(root->left,s+x+"->",ans);
    helper(root->right,s+x+"->",ans);
}
vector<string> binaryTreePaths(TreeNode* root) {
    vector<string>ans;
    helper(root,"",ans);
    return ans;
}
void displaytree(TreeNode* root){//preorder traversal
    if(root==NULL) return;
    cout<<root->val<<" ";
    displaytree(root->left);
    displaytree(root->right);
}
void displayvector(vector<string>&ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    TreeNode* a=new TreeNode(1);
    TreeNode* b=new TreeNode(2);
    TreeNode* c=new TreeNode(3);
    TreeNode* d=new TreeNode(5);
    a->left=b;
    a->right=c;
    b->right=d;
    vector<string>ans=binaryTreePaths(a);
    displayvector(ans);
}