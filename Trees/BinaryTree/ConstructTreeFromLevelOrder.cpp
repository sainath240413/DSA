/*to construct tree using level order traversal by passing the order using the array and queue 
*/
#include<iostream>
#include<queue>
#include<vector>
#include<climits>
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
TreeNode* construct(int a[], int n){
    if(n==0) return NULL;
    TreeNode* root=new TreeNode(a[0]);
    queue<TreeNode*>q;
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        TreeNode* temp=q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(a[i]!=INT_MIN) l=new TreeNode(a[i]);
        else l=NULL; 
        if(j!=n && a[j]!=INT_MIN) r=new TreeNode(a[j]);
        else r=NULL; 
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    } 
    return root;
}
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
    int a[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    TreeNode* root=construct(a,n);
    levelOrderQueue(root);
}