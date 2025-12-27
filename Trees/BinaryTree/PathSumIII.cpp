/*Leetcode 437... revise...
Given the root of a binary tree and an integer targetSum, return the number of paths where the sum of the values
along the path equals targetSum.

The path does not need to start or end at the root or a leaf, but it must go downwards (i.e., traveling only 
from parent nodes to child nodes).

Example 1:
Input: root = [10,5,-3,3,2,null,11,3,-2,null,1], targetSum = 8
Output: 3
Explanation: The paths that sum to 8 are shown.

Example 2:
Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
Output: 3

Constraints:
The number of nodes in the tree is in the range [0, 1000].
-109 <= Node.val <= 109
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
void helper(TreeNode* root,long long targetsum,int &count){
    if(!root) return;
    if(targetsum==root->val) count++;
    helper(root->left,(long long)targetsum-root->val,count);
    helper(root->right,(long long)targetsum-root->val,count);
}
int pathsum(TreeNode* root,int targetsum){
    if(!root) return 0;
    int count=0;
    helper(root,(long long)targetsum,count);
    //i didn't get idea to write below line so revise
    count+=pathsum(root->left,(long long)targetsum)+pathsum(root->right,(long long)targetsum);
    return count;
}
int main(){
    TreeNode* a=new TreeNode(10);
    TreeNode* b=new TreeNode(5);
    TreeNode* c=new TreeNode(-3);
    TreeNode* d=new TreeNode(3);
    TreeNode* e=new TreeNode(2);
    TreeNode* f=new TreeNode(11);
    TreeNode* g=new TreeNode(3);
    TreeNode* h=new TreeNode(-2);
    TreeNode* i=new TreeNode(1);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    d->left=g;
    d->right=h;
    e->right=i;
    int targetSum;
    cout<<"enter target sum:";
    cin>>targetSum;
    cout<<pathsum(a,targetSum);
}