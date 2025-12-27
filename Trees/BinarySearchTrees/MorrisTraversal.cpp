/*
very imp for interviews... revise...
Morris traversal is the iterative inorder traversal which complexities are S.C=O(1) and T.C=O(n)
*/
#include<iostream>
#include<vector>
#include<climits>
#include<functional>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void MorrisInorder(TreeNode* root){
    if(!root) return;
    TreeNode* curr=root;
    TreeNode* pred=NULL;
    while(curr!=NULL){
        if(curr->left){
            pred=curr->left;
            while(pred->right && pred->right!=curr) pred=pred->right;
            if(pred->right==NULL){
                pred->right=curr;
                curr=curr->left;    
            }
            if(pred->right==curr){//unlink
                pred->right=NULL;
                cout<<curr->val<<" ";
                curr=curr->right;
            }
        }
        else{
            cout<<curr->val<<" ";
            curr=curr->right;
        }  
    }
}
int main(){
    TreeNode*a=new TreeNode(4);
    TreeNode*b=new TreeNode(2);
    TreeNode*c=new TreeNode(6);
    TreeNode*d=new TreeNode(1);
    TreeNode*e=new TreeNode(3);
    TreeNode*f=new TreeNode(5);
    TreeNode*g=new TreeNode(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    MorrisInorder(a);
    cout<<endl;
}