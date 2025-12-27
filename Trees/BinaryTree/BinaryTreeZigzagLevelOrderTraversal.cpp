/*Leetcode 103...
Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. 
(i.e., from left to right, then right to left for the next level and alternate between).

Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[20,9],[15,7]]

Example 2:
Input: root = [1]
Output: [[1]]

Example 3:
Input: root = []
Output: []
 
Constraints:
The number of nodes in the tree is in the range [0, 2000].
-100 <= Node.val <= 100*/
#include<iostream>
#include<vector>
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void displayLevel(TreeNode* root,int currentLevel,int targetLevel,vector<int>&x){
    if(root==NULL) return;
    if(currentLevel==targetLevel){
        x.push_back(root->val);
        return;
    }
    if(targetLevel%2!=0){
        displayLevel(root->left,currentLevel+1,targetLevel,x);
        displayLevel(root->right,currentLevel+1,targetLevel,x);
    }
    else{
        displayLevel(root->right,currentLevel+1,targetLevel,x);
        displayLevel(root->left,currentLevel+1,targetLevel,x);
    }
    
}
void levelorder(TreeNode* root,vector<vector<int>>&ans){
    int n=level(root);
    for(int i=1;i<=n;i++){
        vector<int>x;
        displayLevel(root,1,i,x);
        ans.push_back(x);
    }
}
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>>ans;
    levelorder(root,ans);
    return ans;
}
void displayvector(vector<vector<int>>&ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    TreeNode* a=new TreeNode(3);
    TreeNode* b=new TreeNode(9);
    TreeNode* c=new TreeNode(20);
    TreeNode* d=new TreeNode(15);
    TreeNode* e=new TreeNode(7);
    a->left=b;
    a->right=c;
    c->left=d;
    c->right=e;    
    vector<vector<int>>ans=zigzagLevelOrder(a);
    displayvector(ans);
}