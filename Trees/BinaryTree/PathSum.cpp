/*leetcode 112... revise...
Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such 
that adding up all the values along the path equals targetSum.
A leaf is a node with no children.

Example 1:
Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
Output: true
Explanation: The root-to-leaf path with the target sum is shown.

Example 2:
Input: root = [1,2,3], targetSum = 5
Output: false
Explanation: There are two root-to-leaf paths in the tree:
(1 --> 2): The sum is 3.
(1 --> 3): The sum is 4.
There is no root-to-leaf path with sum = 5.

Example 3:
Input: root = [], targetSum = 0
Output: false
Explanation: Since the tree is empty, there are no root-to-leaf paths.
 
Constraints:
The number of nodes in the tree is in the range [0, 5000].
-1000 <= Node.val <= 1000
-1000 <= targetSum <= 1000*/
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
bool hasPathSum(TreeNode* root, int targetSum){
    if(root==NULL) return false;
    if(root->right==NULL && root->left==NULL) return targetSum==root->val;
    return (hasPathSum(root->left,targetSum-root->val) || hasPathSum(root->right,targetSum-root->val));
}
int main(){
    TreeNode* a=new TreeNode(1);
    TreeNode* b=new TreeNode(2);
    TreeNode* c=new TreeNode(3);
    TreeNode* d=new TreeNode(4);
    TreeNode* e=new TreeNode(5);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    int targetSum;
    cout<<"enter target sum:";
    cin>>targetSum;
    cout<<hasPathSum(a,targetSum);
}