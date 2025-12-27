/*Leetcode 108... revise... do it again...
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced 
binary search tree.

Example 1:
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:

Example 2:
Input: nums = [1,3]
Output: [3,1]
Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.

Constraints:
1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in a strictly increasing order.*/
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
TreeNode* helper(vector<int>& nums,int lo,int hi){
    if(lo>hi) return NULL;
    int mid=lo+(hi-lo)/2;
    TreeNode* root=new TreeNode(nums[mid]);
    root->left=helper(nums,lo,mid-1);
    root->right=helper(nums,mid+1,hi);
    return root;
}
TreeNode* sortedArrayToBST(vector<int>& nums){
    int n=nums.size();
    return helper(nums,0,n-1);
}
void inorder(TreeNode* root){
    if (!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main(){
    vector<int>nums={-10,-3,0,5,9};
    TreeNode* root=sortedArrayToBST(nums);
    cout<<"Inorder traversal of BST:";
    inorder(root);
    cout<<endl;
}