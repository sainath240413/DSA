/*There are two ways to traverse a binary tree: depth-first and breadth-first.
Depth-first traversal visits nodes as far down a branch as possible before backtracking, 
while breadth-first traversal visits all nodes at the present depth level before moving on to 
nodes at the next depth level. 
In this code, we will implement the depth-first traversal of a binary tree using preorder traversal,inorder,postorder.
Preorder traversal visits the root node first, then recursively visits the left subtree,followed by the right subtree.
Inorder traversal visits the left subtree first, then the root node, followed by the right subtree.
Postorder traversal visits the left subtree first, then the right subtree, followed by the root node
*/
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
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
vector<int> preorderiterative(TreeNode* root){//using stack
    if(root==NULL) return;
    vector<int>ans;
    stack<TreeNode*>s;
    s.push(root);
    while(!s.empty()){
        TreeNode* temp=s.top();
        s.pop();
        ans.push_back(temp->val);
        if(temp->right!=NULL) s.push(temp->right);
        if(temp->left!=NULL) s.push(temp->left);
    }
    return ans;
}
void preorder(TreeNode* root){//T.C=O(n), S.C=O(h) where h is height of tree due to call stack
    //in worst case, h=n (when tree is skewed)
    //in best case, h=log(n) (when tree is balanced)
    if(root==NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(TreeNode* root){//T.C=O(n), S.C=O(h) where h is height of tree due to call stack
    //in worst case, h=n (when tree is skewed)
    //in best case, h=log(n) (when tree is balanced)
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void inorderiterative(TreeNode* root){
    if(root==NULL) return;
    stack<TreeNode*>s;
    vector<int>ans;
    TreeNode* node=root;
    ans.push_back(root->val);
    while(s.size()>0 || node!=NULL){
        if(node!=NULL){
            s.push(node);
            node=node->left;
        }
        else{
            TreeNode* temp=s.top();
            s.pop();
            ans.push_back(temp->val);
            node=temp->right;
        }
    }
}   
void postorder(TreeNode* root){//T.C=O(n), S.C=O(h) where h is height of tree due to call stack
    //in worst case, h=n (when tree is skewed)
    //in best case, h=log(n) (when tree is balanced)
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
void postorderiterative(TreeNode* root){//we will use two stacks to implement postorder traversal iteratively
    vector<int>ans=preorderiterative(root);//we can use preorder traversal to get the postorder traversal
    reverse(ans.begin(),ans.end());//reverse the preorder traversal to get the postorder traversal
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
    cout<<"Preorder Traversal: ";
    preorder(a);
    cout<<endl;
    cout<<"inorder Traversal: ";
    inorder(a);
    cout<<endl;
    cout<<"postorder Traversal: ";
    postorder(a);
    cout<<endl;
}