/*Leetcode 543...revise...
Given the root of a binary tree, return the length of the diameter of the tree.
The diameter of a binary tree is the length of the longest path between any two nodes in a tree. 
This path may or may not pass through the root.
The length of a path between two nodes is represented by the number of edges between them.

Example 1:
Input: root = [1,2,3,4,5]
Output: 3
Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].

Example 2:
Input: root = [1,2]
Output: 1

Constraints:
The number of nodes in the tree is in the range [1, 104].
-100 <= Node.val <= 100*/
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
//using recursion
int level(Node* root){
    if(root==NULL) return 0;
    int leftlev=level(root->left);
    int rightlev=level(root->right);
    return 1+max(leftlev,rightlev);
}
void helper(Node* root,int &maxdia){
    if(root==NULL) return;
    int dia=level(root->left)+level(root->right);
    maxdia=max(dia,maxdia);
    helper(root->left,maxdia);
    helper(root->right,maxdia);
}
int diameterOfBinaryTree(Node* root) {
    int maxdia=0;
    helper(root,maxdia);
    return maxdia;
}

//using DP memorization
unordered_map<Node*,int>m;
int levels1(Node* root){
    if(!root) return 0;
    if(m.find(root)!=m.end()) return m[root];
    return m[root]=1+max(levels1(root->left),levels1(root->right));
}
int diameterOfBinaryTree1(Node* root){
    if(!root) return 0;
    int a=levels1(root->left)+levels1(root->right);
    int b=diameterOfBinaryTree1(root->left);
    int c=diameterOfBinaryTree1(root->right);
    return max(a,max(b,c));
}

//DP
int ans=0;
int helper(Node* root){
    if(!root) return 0;
    int leftlev=helper(root->left);
    int rightlev=helper(root->right);
    int mydia=leftlev+rightlev;
    ans=max(ans,mydia);
    return 1+max(leftlev,rightlev);
}
int diameterOfBinaryTree2(Node* root){
    ans=0;
    helper(root);
    return ans;
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    cout<<"diameter Of tree is:"<<diameterOfBinaryTree(a)<<endl;
    cout<<"diameter Of tree is:"<<diameterOfBinaryTree1(a)<<endl;
    cout<<"diameter Of tree is:"<<diameterOfBinaryTree2(a)<<endl;
}