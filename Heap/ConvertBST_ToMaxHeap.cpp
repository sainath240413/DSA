/*revise...*/
#include<iostream>
#include<vector>
#include<queue>
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
void inorder(TreeNode* root, vector<int>&v){//reverse inoder traversal
    if(!root) return;
    inorder(root->right,v);
    v.push_back(root->val);
    inorder(root->left,v);
}
void bstTomaxheap(TreeNode* root, vector<int>&v, int &idx){
    if(!root) return;
    root->val=v[idx++];
    bstTomaxheap(root->left,v,idx);
    bstTomaxheap(root->right,v,idx);
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void levelordertraversal(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);
    while(q.size()>0){
        TreeNode* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    TreeNode* a=new TreeNode(10);
    TreeNode* b=new TreeNode(5);
    TreeNode* c=new TreeNode(16);
    TreeNode* d=new TreeNode(1);
    TreeNode* e=new TreeNode(8);
    TreeNode* f=new TreeNode(12);
    TreeNode* g=new TreeNode(20);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    vector<int>v;//reverse inorder traversal
    inorder(a,v);
    display(v);
    int i=0;
    bstTomaxheap(a,v,i);
    cout<<"Max Heap after conversion:"<<endl;
    levelordertraversal(a);
}   