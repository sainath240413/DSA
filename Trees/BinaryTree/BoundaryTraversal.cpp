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
int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void displayLevel(TreeNode* root,int currentLevel,int targetLevel){
    if(root==NULL) return;
    if(currentLevel==targetLevel){
        cout<<root->val<<" ";
        return;
    }
    displayLevel(root->left,currentLevel+1,targetLevel);
    displayLevel(root->right,currentLevel+1,targetLevel);
}
void levelorder(TreeNode* root){
    int levels=level(root);
    for(int i=1;i<=levels;i++){
        displayLevel(root,1,i);
        cout<<endl;
    }
}
void leftBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return; //do not print leaf nodes
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL)leftBoundary(root->right);
}
void rightBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return; //do not print leaf nodes
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";
}
void BottomBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        cout<<root->val<<" ";
    }
    BottomBoundary(root->left);
    BottomBoundary(root->right);
}
void BoundaryTraversal(TreeNode* root){
    leftBoundary(root);
    BottomBoundary(root);
    rightBoundary(root->right);//we do not print root again, as it is already printed in leftBoundary
    cout<<endl;
}
int main(){
    int a[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n=sizeof(a)/sizeof(a[0]);
    TreeNode* root=construct(a,n);
    cout<<endl<<"Level order traversal:"<<endl;
    levelorder(root);
    cout<<endl<<"Boundary Traversal:"<<endl;
    BoundaryTraversal(root);
}