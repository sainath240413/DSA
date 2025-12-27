#include<iostream>
#include<vector>
#include<climits>
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
TreeNode* insert(TreeNode* root,int val){
    if(root==NULL) return new TreeNode(val);
    if(val<root->val) root->left=insert(root->left,val);
    else root->right=insert(root->right,val);
    return root;
}
TreeNode* create(vector<int>v){
    TreeNode* root=NULL;
    for(int i=0;i<v.size();i++){
        root=insert(root,v[i]);
    }
    return root;
}
TreeNode* search(TreeNode* root,int val){
    if(!root) return NULL;
    if(root->val>val) search(root->left,val);
    else search(root->right,val);
    return root;
}
int inordersuccessor(TreeNode* root,int val,TreeNode* suc){
    if(!suc) return INT_MIN;
    while(suc->left!=NULL) suc=suc->left;
    return suc->val;
}
int main(){
    vector<int>v={10,5,20,2,8,15,25,4,12,3,13};
    TreeNode* root=create(v);
    int val;
    cout<<"enter node to find successor:";
    cin>>val;
    TreeNode* node=search(root,val);
    TreeNode* suc=node->right;
    cout<<"inorder successor of "<<val<<" is:";
    cout<<inordersuccessor(root,val,suc);
}