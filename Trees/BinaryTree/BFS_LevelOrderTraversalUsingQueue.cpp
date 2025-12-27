/*level order traversal using queue
in worsst case T.C=O(n^2) when tree is skewed
in best case T.C=O(nlogn) when tree is balanced
*/
#include<iostream>
#include<queue>
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
void levelOrderQueue(TreeNode* root){
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
    TreeNode* a=new TreeNode(3);
    TreeNode* b=new TreeNode(9);
    TreeNode* c=new TreeNode(20);
    TreeNode* d=new TreeNode(15);
    TreeNode* e=new TreeNode(7);
    a->left=b;
    a->right=c;
    c->left=d;
    c->right=e; 
    cout<<"Level order traversal using queue:"<<endl;
    levelOrderQueue(a);
}