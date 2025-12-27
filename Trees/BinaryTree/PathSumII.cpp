/*Leetcode 113... revise...
Given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where the sum of the 
node values in the path equals targetSum. Each path should be returned as a list of the node values, not node 
references.

A root-to-leaf path is a path starting from the root and ending at any leaf node. A leaf is a node with no 
children.

Example 1:
Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
Output: [[5,4,11,2],[5,8,4,5]]
Explanation: There are two paths whose sum equals targetSum:
5 + 4 + 11 + 2 = 22
5 + 8 + 4 + 5 = 22

Example 2:
Input: root = [1,2,3], targetSum = 5
Output: []

Example 3:
Input: root = [1,2], targetSum = 0
Output: []
 
Constraints:
The number of nodes in the tree is in the range [0, 5000].
-1000 <= Node.val <= 1000
-1000 <= targetSum <= 1000*/
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
void helper(TreeNode* root,int targetSum,vector<vector<int>>&ans,vector<int>&x){
    if(root==NULL) return;
    x.push_back(root->val);
    if(root->left==NULL && root->right==NULL && targetSum==root->val) ans.push_back(x);
    helper(root->left,targetSum-root->val,ans,x);
    helper(root->right,targetSum-root->val,ans,x);
    x.pop_back();
}
vector<vector<int>> pathSum(TreeNode* root,int targetSum){
    vector<vector<int>>ans;
    vector<int>x;
    helper(root,targetSum,ans,x);
    return ans;
}
void display(vector<vector<int>>ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    TreeNode* a=new TreeNode(5);
    TreeNode* b=new TreeNode(4);
    TreeNode* c=new TreeNode(8);
    TreeNode* d=new TreeNode(11);
    TreeNode* e=new TreeNode(13);
    TreeNode* f=new TreeNode(4);
    TreeNode* g=new TreeNode(7);
    TreeNode* h=new TreeNode(2);
    TreeNode* i=new TreeNode(5);
    TreeNode* j=new TreeNode(1);
    a->left=b;
    a->right=c;
    b->left=d;
    c->left=e;
    c->right=f;
    d->left=g;
    d->right=h;
    f->left=i;
    f->right=j;
    int targetSum;
    cout<<"enter target sum:";
    cin>>targetSum;
    vector<vector<int>>ans=pathSum(a,targetSum);
    display(ans);
}