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
int sizeofTree(TreeNode* root){
    if(!root) return 0;
    return 1+sizeofTree(root->left)+sizeofTree(root->right);
}
bool isCBT(TreeNode* root){
    int size=sizeofTree(root);
    int count=0;
    if(!root) return true;
    queue<TreeNode*>q;
    q.push(root);
    while(count<size){
        TreeNode* temp=q.front();
        q.pop();
        count++;
        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    while(q.size()>0){
        TreeNode* temp=q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    return true;
}
bool ismax(TreeNode* root){
    if(!root) return true;
    if((root->left && root->val<root->left->val) || (root->right && root->val<root->right->val)) return false;
    return ismax(root->left) && ismax(root->right);
}
int main(){
    TreeNode* a=new TreeNode(20);
    TreeNode* b=new TreeNode(15);
    TreeNode* c=new TreeNode(10);
    TreeNode* d=new TreeNode(8);
    TreeNode* e=new TreeNode(11);
    TreeNode* f=NULL;
    TreeNode* g=new TreeNode(5);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=g;
    c->right=f;
    if(isCBT(a) && ismax(a)) cout<<"Yes, it is a Max Heap"<<endl;
    else cout<<"No, it is not a Max Heap"<<endl;
}