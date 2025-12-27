/*Leetcode 124...revise...
A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A 
node can only appear in the sequence at most once. Note that the path does not need to pass through the root.
The path sum of a path is the sum of the node's values in the path.
Given the root of a binary tree, return the maximum path sum of any non-empty path.

Example 1:
Input: root = [1,2,3]
Output: 6
Explanation: The optimal path is 2 -> 1 -> 3 with a path sum of 2 + 1 + 3 = 6.

Example 2:
Input: root = [-10,9,20,null,null,15,7]
Output: 42
Explanation: The optimal path is 15 -> 20 -> 7 with a path sum of 15 + 20 + 7 = 42.
 
Constraints:
The number of nodes in the tree is in the range [1, 3 * 104].
-1000 <= Node.val <= 1000*/
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int ans;
int helper(Node* root){
    if(!root) return 0;
    int leftsum=max(0,helper(root->left));
    int rightsum=max(0,helper(root->right));
    int tempans=root->val+leftsum+rightsum;
    ans=max(ans,tempans);
    return root->val+max(leftsum,rightsum);
}
int maxPathSum(Node* root){
    ans=INT_MIN;
    helper(root);
    return ans;
}
int main(){
    Node* a=new Node(2);
    Node* b=new Node(-1);
    a->left=b;
    cout<<"maximum path sum is:"<<maxPathSum(a);
}